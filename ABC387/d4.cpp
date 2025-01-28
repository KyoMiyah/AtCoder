#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 1e9;
    rep(re,2) {
        queue<P> q;
        vector<vector<int>> dis(h,vector<int> (w));
        rep(i,h) rep(j,w) dis[i][j] = 1e9;

        auto push = [&] (int i, int j, int d) {
            if (i<0 || j<0 || i>=h || j>=w) return;
            if (dis[i][j] != 1e9) return;
            if (s[i][j] == '#') return;
            dis[i][j] = d;
            q.emplace(i,j);
        };

        rep(i,h) rep(j,w) if (s[i][j] == 'S') push(i,j,0);
        while(!q.empty()) {
            auto [i,j] = q.front(); q.pop();
            int d = dis[i][j];
            if (s[i][j] == 'G') ans = min(ans,d);
            if ((i+j)%2 == re) {
                push(i+1,j,d+1);
                push(i-1,j,d+1);
            }
            else {
                push(i,j+1,d+1);
                push(i,j-1,d+1);               
            }
        }
    }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}