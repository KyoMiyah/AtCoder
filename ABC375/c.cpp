#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i,n) cin >> a[i];

    vector<vector<int>> b(n/2);
    rep(i,n/2) {
        for (int j=i+1; j<=n-i; j++)
        b[i].push_back(j);
    }

    vector<string> aa = a;
    rep(i,n/2) {
        rep(x,b[i].size()) rep(y,b[i].size()) {
        aa[b[i][y]-1][n-b[i][x]] = a[b[i][x]-1][b[i][y]-1];
        }
        a = aa;
    }

    rep(i,n) cout << a[i] << endl;
return 0;
}