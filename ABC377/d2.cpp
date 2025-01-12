#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> lmax(m+1, 0);
    rep(i,n) {
        int l, r;
        cin >> l >> r;
        lmax[r] = max(lmax[r], l);
    }

    ll ans = 0;
    int l = 1;
    for (int r=1; r<=m; r++) {
        while (l <= lmax[r]) l++;//今のl,rが条件を満たしているか
        ans += r-l+1;
    }

    cout << ans << endl;
return 0;
}