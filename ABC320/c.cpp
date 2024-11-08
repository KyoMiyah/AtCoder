#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int m;
    cin >> m;
    vector<string> s(3);
    rep(i,3) cin >> s[i];

    int ans = 1e9;

        rep(t1,3*m) rep(t2,3*m) rep(t3,3*m) {
            if (t1 == t2 || t1 == t3 || t2 == t3) continue;
            if (s[0][t1%m] == s[1][t2%m] && s[0][t1%m] == s[2][t3%m] && s[1][t2%m] == s[2][t3%m]) {
                ans = min(ans,max(t1,max(t2,t3)));
            }
        }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}