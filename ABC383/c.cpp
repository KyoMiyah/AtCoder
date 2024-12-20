#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;
const int di[] = {0,1,0,-1};
const int dj[] = {1,0,-1,0};

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    vector<vector<int>> visited(h,vector<int>(w));
    set<P> reach; //すでに見た頂点の集合。
    queue<P> q;
    rep(i,h) rep(j,w) {
        if (s[i][j] == '#') visited[i][j] = 1e9;
        else if (s[i][j] == 'H') {
            q.push({i,j});
            reach.insert({i,j});
        }
        else visited[i][j] = -1;
    }

    while(!q.empty()) {
        P v = q.front(); q.pop();
        rep(k,4) {
            int vi = v.first, vj = v.second;
            int n = visited[vi][vj];
            vi += di[k];
            vj += dj[k];
            n++;
            if (vi < 0 || vi >= h || vj < 0 || vj >= w) continue;
            if (reach.count({vi,vj})) continue;
            if (visited[vi][vj] == 1e9) continue;
            reach.insert({vi,vj});
            q.push({vi,vj});
            visited[vi][vj] = n;
        }
    }

    int ans = 0;
    rep(i,h) rep(j,w) if (visited[i][j] <= d && visited[i][j] >= 0) ans++;
    cout << ans << endl;
return 0;
}