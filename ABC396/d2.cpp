#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, int>;

const ll INF = 1LL << 60;

struct LinearBasis {
    array<ll, 60> basis = {}; // XOR基底
    void insert(ll x) {
        for (int i = 59; i >= 0; i--) {
            if ((x >> i) & 1) {
                if (!basis[i]) {
                    basis[i] = x;
                    return;
                }
                x ^= basis[i];
            }
        }
    }
    ll getMin(ll x) {
        for (int i = 59; i >= 0; i--) x = min(x, x ^ basis[i]);
        return x;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, ll>>> G(N + 1);
    vector<tuple<int, int, ll>> edges;

    for (int i = 0; i < M; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        G[u].emplace_back(v, w);
        G[v].emplace_back(u, w);
        edges.emplace_back(u, v, w);
    }

    // ダイクストラ法で最短距離を求める
    vector<ll> dist(N + 1, INF);
    dist[1] = 0;
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.emplace(0, 1);

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (dist[u] < d) continue;
        for (auto [v, w] : G[u]) {
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.emplace(dist[v], v);
            }
        }
    }

    // XOR基底を作成
    LinearBasis lb;
    for (auto [u, v, w] : edges) {
        ll cycle_xor = dist[u] ^ dist[v] ^ w;
        lb.insert(cycle_xor);
    }

    // 最小 XOR 値を求める
    ll answer = lb.getMin(dist[N]);
    cout << answer << endl;

    return 0;
}