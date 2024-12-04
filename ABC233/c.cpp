#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
// ABC233 C

int n, ans; ll x;
vector<vector<int>> a;

void dfs(int i, ll s) {
    if (i == n) {
    if (s == x) ans++;
    return;
    }
    rep(j,a[i].size()) {
        if (a[i][j] > x/s) continue;
        dfs(i+1,s*a[i][j]);
    }
}

int main() {
    cin >> n >> x;
    a = vector<vector<int>>(n);
    rep(i,n) {
        int l;
        cin >> l;
        a[i] = vector<int> (l);
        rep(j,l) cin >> a[i][j];
        }

    dfs(0,1);
    cout << ans << endl;
return 0;
}