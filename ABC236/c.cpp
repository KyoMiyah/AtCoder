#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    set <string> t;
    rep(i,m) {
        string tt;
        cin >> tt;
        t.insert(tt);
    }
    rep(i,n) {
        if (t.count(s[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
return 0;
}