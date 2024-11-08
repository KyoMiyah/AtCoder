#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> x(n, vector<int>(n));
    vector<int> p(n);
    rep(i,n) p[i] = i;
    rep(i,m) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        x[a][b] = c;
        x[b][a] = c;
    }
    int ans = 0;

    do {
        int dis = 0;
        rep(i,n-1) {
            if (x[p[i]][p[i+1]] == 0) break;
            else dis += x[p[i]][p[i+1]];
        }
        ans = max(ans,dis);
    } while (next_permutation(p.begin(), p.end()));

    cout << ans << endl;

return 0;
}