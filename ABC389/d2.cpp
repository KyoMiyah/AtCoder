#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    double r;
    cin >> r;
    ll ans = (ll)(2*r-1)*(2*r-1);

    if (r == 1) {
        cout << 0 << endl;
        return 0;
    }

    double rr = r;
    while(rr > 0) {
        int cnt = 0;
        for (double i=rr-1; i>=0; i--) {
            double r1 = sqrt((rr-0.5)*(rr-0.5) + (i+0.5)*(i+0.5));
            //double r2 = sqrt((rr-0.5)*(rr-0.5) + (i-0.5)*(i-0.5));
            if (r1 < r) {
                cnt = (rr-1)*2-(i*2+1);
                break;
            }
        }
        cnt *= 4;
        if (cnt < 0) break;
        ans -= cnt;
        rr--;
    }

    cout << ans << endl;
return 0;
}