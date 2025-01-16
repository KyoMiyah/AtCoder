#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll, ll>;
//ABC373 D

int main() {
    ll n, m;
    cin >> n >> m;
    vector<vector<P>> a(n);
    rep(i,m) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        a[u].push_back({v,w});
        a[v].push_back({u,-w});
    }

    vector<ll> x(n);
    vector<bool> used(n);
    
        auto dfs = [&] (auto dfs, int i, ll val) {
            if (used[i]) return;
            used[i] = true;
            x[i] = val;
            for (auto b : a[i]) {
                dfs(dfs, b.first, val+b.second);
            }
        };

    rep(sv,n) {
        if (used[sv]) continue;

        dfs (dfs, sv, 0);
    }

    rep(i,n) cout << x[i] << ' ';
    cout << endl;

return 0;
}