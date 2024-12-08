#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    vector<vector<int>>a(n);
    rep(i,n) {
        int k;
        cin >> t[i] >> k;
        a[i] = vector<int>(k);
        rep(j,k) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    vector<bool> vis(n);
    vis[n-1] = true;
    for (int i=n-1; i>=0; i--) {
        if (vis[i]) {
            for (int j : a[i]) vis[j] = true;
        }
    }

    ll ans = 0;
    rep(i,n) if (vis[i]) ans += t[i];
    cout << ans << endl;
return 0;
}