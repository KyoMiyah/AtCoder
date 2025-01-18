#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    double r;
    cin >> r;
    ll ans = (ll)(2*r-1)*(2*r-1);
    double rr = r;
    while(1) {
        int cnt = 0;
        for (double i=-rr+2; i<rr; i++) {
            double r1 = sqrt((rr-0.5)*(rr-0.5) + (i+0.5)*(i+0.5));
            double r2 = sqrt((rr-0.5)*(rr-0.5) + (i-0.5)*(i-0.5));
            if (r1 > r || r2 > r) {
                cnt ++;
            }
        }
        cnt *= 4;
        ans -= cnt;
        if (cnt == 0) break;
        rr--;
    }

    cout << ans << endl;
return 0;
}