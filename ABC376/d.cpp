#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        to[a].push_back(b);
    }

    int INF = 1e9;
    vector<int> dis(n, INF);
    queue<int> q;
    dis[0] = 0; q.push(0);

    while(!q.empty()) {
        int v = q.front(); q.pop();
        for (int u : to[v]) {
            if (dis[u] != INF) continue; //すでに見た頂点は無視する。
            dis[u] = dis[v] + 1; q.push(u);
        }
    }

    int ans = INF;
    rep(i,n) {
        for (int j : to[i]) {
            if (j == 0) {
                ans = min(ans,dis[i] + 1);
            }
        }
    }

    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}