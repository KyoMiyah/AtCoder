#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll, ll>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<vector<P>> to(m);
    rep(i,m) {
        int u, v; ll b;
        cin >> u >> v >> b;
        u--; v--;
        to[u].push_back({v,b});
        to[v].push_back({u,b});
    }

    vector<ll> x(n);
    rep(i,n) x[i] = 1e18;
    for (int i=1; i<n; i++) {
        vector<bool> used(n);

        auto dfs = [&] (auto dfs, int j, ll val) {
            if (i == j) {
                x[i] = min(val,x[i]);
                return;
            }
            if (used[j]) return;
            used[j] = true;
            for (auto b : to[j]) {
                dfs(dfs, b.first, val + b.second + a[b.first]);
            }
        };

        dfs (dfs, 0, a[0]);
    }

    for (int i=1; i<n; i++) cout << x[i] << ' ';
    cout << endl;
return 0;
}