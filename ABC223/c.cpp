#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    double c = 0;
    rep(i,n) c += a[i]/b[i];
    double mid = c/2;

    double length = 0;
    int nn;
    rep(i,n) {
        if (length+(a[i]/b[i]) >= mid) {
            nn = i;
            break;
        }
        length += a[i]/b[i];
    }

    double ans = 0;
    rep(i,nn) ans += a[i];
    double dif = mid - length;
    ans += dif*b[nn];

    printf("%.6f",ans);
    cout << endl;

return 0;
}