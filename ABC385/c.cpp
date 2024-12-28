#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<vector<int>> height(n);
    rep(i,n) height[h[i]-1].push_back(i);

    int ans = 1;

    rep(i,n) {
        if (height[i].size() == 0 || height[i].size() == 1) continue;
        set<int> he;
        rep(j,height[i].size()) he.insert(height[i][j]);
        rep(j,height[i].size()) {
            for (int k=j+1; k<height[i].size(); k++) {
            int dif = height[i][k] - height[i][j];
            int cnt = 1;
            vector<int> can;
            can.push_back(height[i][j]);
            for (int l=1; l<height[i].size()-k+1; l++) can.push_back(can[l-1]+dif);
            for (int l=1; l<can.size(); l++) {
                if (he.count(can[l])) cnt++;
                else break;
            }
            ans = max(cnt, ans);            
            }
        }
    }

    cout << ans << endl;

return 0;
}