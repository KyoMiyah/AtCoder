#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int>>> a(n, vector<vector<int>>(n, vector<int>(n)));
    rep(i,n) rep(j,n) rep(k,n) cin >> a[i][j][k];
    int q;
    cin >> q;
    rep(nq,q) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--; rx--; ly--; ry--; lz--; rz--;
        ll ans = 0;
        for (int i=lx; i<=rx; i++) for (int j=ly; j<=ry; j++) for (int k=lz; k<=rz; k++) {
            ans += a[i][j][k];
        }
        cout << ans << endl;
    }

return 0;
}