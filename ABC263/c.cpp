#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> koho(m);
    rep(i,m) koho[i] = i+1;
    int nn = 1;
    for (int i=m; i>=m-n+1; i--) nn *= i;
    for (int i=n; i>=1; i--) nn /= i;
    vector<vector<int>> ans(nn);
    
    int cnt = 0;
    for (int x=0; x < (1<<m); x++) {
        vector<int> a;
        rep(nx,m) {
        if (x>>nx&1) a.push_back(koho[nx]);
        }
        if (a.size() != n) continue;
        cnt++;
        rep(i,a.size()) ans[cnt-1].push_back(a[i]);
    }
    sort(ans.begin(), ans.end());

    rep(i,nn) {
        rep(j,n) cout << ans[i][j] << ' ';
        cout << endl;
    }

return 0;
}