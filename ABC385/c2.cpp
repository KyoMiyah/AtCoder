#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    map<int,vector<int>> to;
    rep(i,n) to[h[i]].push_back(i);

    int ans = 1;

    for (auto p : to) {
         vector<int> height = p.second;
        if (height.size() == 1) continue;
        set<int> he;
        rep(j,height.size()) he.insert(height[j]);
        rep(j,height.size()) {
            for (int k=j+1; k<height.size(); k++) {
            int dif = height[k] - height[j];
            int cnt = 1;
            int first = height[j];
            while(1) {
                first += dif;
                if (he.count(first)) cnt++;
                else break;
            }
            ans = max(cnt, ans);            
            }
        }
    }

    cout << ans << endl;

return 0;
}