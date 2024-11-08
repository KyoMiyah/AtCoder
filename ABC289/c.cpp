#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    rep(i,m) {
        int c;
        cin >> c;
        rep(j,c) {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    int ans = 0;
    for (int x=0; x < (1<<m); x++) {
        set<int> b;
        rep(nx,m) {
        if (x>>nx&1) {
            rep(j,a[nx].size()) b.insert(a[nx][j]);
        }
        }
        bool ok = true;
        for (int i=1; i<=n; i++) {
            if (!b.count(i)) ok = false;
        }
        if (ok) ans++;
    }
    cout << ans << endl;
return 0;
}