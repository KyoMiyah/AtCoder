#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, ll>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<P>> a(n);
    rep(i,m) {
        int u, v; ll w;
        cin >> u >> v >> w;
        u--; v--;
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    vector<bool> used(n);
    vector<ll> ww;


    auto dfs = [&] (auto dfs, int i, ll val) {
        if (used[i]) return;
        used[i] = true;
        ww.push_back(val);
        if (i == n-1) {
            
        }
        for (auto b : a[i]) {
            dfs(dfs, b.first, b.second);
        }
    };

    dfs (dfs, 0, 0);
return 0;
}