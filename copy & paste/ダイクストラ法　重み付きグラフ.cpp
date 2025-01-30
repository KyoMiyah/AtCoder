#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll, ll>;
//ABC362 D

struct Edge {
    int to, cost;
    Edge(int to, int cost): to(to), cost(cost) {}
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<vector<Edge>> g(n);

    rep(i,m) {
        int u, v, b;
        cin >> u >> v >> b;
        u--; v--;
        g[u].emplace_back(v, b+a[v]);
        g[v].emplace_back(u, b+a[u]);
    }

    vector<ll> dis(n,1e18);
    priority_queue<P, vector<P>, greater<P>> q; //昇順の priority_queue（最小値を取り出す）
    // priority_queue<int> q;　が降順の priority_queue（デフォルト動作：最大値を取り出す）
    dis[0] = a[0]; q.emplace(a[0],0);

    while (!q.empty()) {
        auto [d,v] = q.top(); q.pop();
        if (dis[v] != d) continue; //ダイクストラ法における「古い情報の無視」 をするために必要
        for (Edge e : g[v]) {
            ll nd = d + e.cost;
            if (dis[e.to] <= nd) continue;
            dis[e.to] = nd; q.emplace(nd, e.to);
        }
    }

    for (int i=1; i<n; i++) cout << dis[i] << ' ';
    cout << endl;
return 0;
}