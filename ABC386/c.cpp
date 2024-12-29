#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    int ns = s.size(), nt = t.size();

    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }

    if (ns == nt) {
        int cnt = 0;
        rep(i,ns) if (s[i] != t[i]) cnt++;
        if (cnt == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }

    if (!(ns + 1 == nt || nt + 1 == ns)) {
        cout << "No" << endl;
        return 0;
    }

    if (nt < ns) {
        swap(s,t);
        swap(ns,nt);
    }
    string ss, tt;
    int i = 0;
    while (i < ns) {
        if (s[i] == t[i]) {
            ss += s[i];
            tt += t[i];
            i++;
        }
        else break;
    }

    ss += t[i];
    tt += t[i];

    while (i < ns) {
        if (s[i] == t[i+1]) {
            ss += s[i];
            tt += t[i+1];
            i++;
        }
        else break;
    }

    if (ss == tt && ss.size() == nt && tt.size() == nt) cout << "Yes" << endl; 
    else cout << "No" << endl;

return 0;
}