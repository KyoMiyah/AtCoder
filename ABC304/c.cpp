#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin >> x[i] >> y[i];
    vector<vector<double>> a(n, vector<double>(n));
    rep(i,n) rep(j,n) {
        a[i][j] = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
        a[j][i] = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
    }

    vector<bool> hantei(n);
    hantei[0] = true;
    rep(k,n) {rep(i,n) {
        rep(j,n) {
            if (hantei[i] && a[i][j] <= d) hantei[j] = true;
        }
    }
    }

    rep(i,n) if (hantei[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}