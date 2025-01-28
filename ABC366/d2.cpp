#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<vector<ll>>> a(n, vector<vector<ll>>(n, vector<ll>(n)));
    rep(i,n) rep(j,n) rep(k,n) cin >> a[i][j][k];
    vector<vector<vector<ll>>> s(n, vector<vector<ll>>(n, vector<ll>(n+1)));
    rep(i,n) rep(j,n) rep(k,n) s[i][j][k+1] = s[i][j][k] + a[i][j][k];
    int q;
    cin >> q;
    rep(nq,q) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--; rx--; ly--; ry--; lz --; rz;
        ll ans = 0;
        for (int i=lx; i<=rx; i++) for (int j=ly; j<=ry; j++) {
            ans += s[i][j][rz] - s[i][j][lz];
        }
        cout << ans << endl;
    }

return 0;
}