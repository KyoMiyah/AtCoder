#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;
    int n = min (s.size(),t.size());
    rep(i,n) {
        if (s[i]-t[i] == 0) continue;
        else if (s[i]-t[i] > 0) {
            cout << "No" << endl;
            return 0;
        }
        else if (s[i]-t[i] < 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (s.size() < t.size()) cout << "Yes" << endl;
    else if (s.size() > t.size()) cout << "No" << endl;
return 0;
}