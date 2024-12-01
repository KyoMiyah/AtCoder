#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    vector<vector<int>> dpa(n), dpb(n);
    dpa[0].push_back(a[0]);
    dpb[0].push_back(b[0]);
    for (int i=1; i<n; i++) {
        rep(j,dpa[i-1].size()) {
            int disa = dpa[i-1][j] + a[i];
            dpa[i].push_back(disa);
            int disb = dpa[i-1][j] + b[i];
            dpb[i].push_back(disb);
        }
        rep(j,dpb[i-1].size()) {
            int disa = dpb[i-1][j] + a[i];
            dpa[i].push_back(disa);
            int disb = dpb[i-1][j] + b[i];
            dpb[i].push_back(disb);
        }
    }
    bool ans = false;
    rep(i,dpa[n-1].size()) if (dpa[n-1][i] == x) ans = true;
    rep(i,dpb[n-1].size()) if (dpb[n-1][i] == x) ans = true;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}