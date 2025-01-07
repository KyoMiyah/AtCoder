#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<vector<int>> a(9,vector<int>(9));
    rep(i,9) rep(j,9) a[i][j] = (i+1)*(j+1);

    int x;
    cin >> x;

    int ans = 0;
    rep(i,9) rep(j,9) if (a[i][j] != x) ans += a[i][j];
    cout << ans << endl;
return 0;
}