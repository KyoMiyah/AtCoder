#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n,vector<int> (m));
    rep(i,n) rep(j,m) cin >> b[i][j];

    bool ok = true;
    rep(i,n) {
        rep(j,m-1) {
            if (b[i][j] + 1 != b[i][j+1]) ok = false;
            if ((b[i][j]-1)%7 > (b[i][j+1]-1)%7) ok = false;
        }
    }

    rep(j,m) {
        rep(i,n-1) {
            if (b[i][j] + 7 != b[i+1][j]) ok = false;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}