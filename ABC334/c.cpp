#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i,k) cin >> a[i];

    if (k==1) {
        cout << 0 << endl;
        return 0;
    }

    if (k%2 == 0) {
        ll ans = 0;
        rep(i,k/2) ans += abs(a[i*2]-a[i*2+1]);
        cout << ans << endl;
        return 0;
    }
    else {
        ll ansmin = 1e18;
        rep(i,k) {
            ll ans2 = 0;
            if (i%2 == 0) {
                rep(j,i/2) ans2 += abs(a[j*2]-a[j*2+1]);
                for (int j=i/2; j<k/2; j++) ans2 += abs(a[j*2+2]-a[j*2+1]);
            }
            else {
                rep(j,i/2) ans2 += abs(a[j*2]-a[j*2+1]);
                ans2 += abs(a[i/2]-a[i/2+1]);
                for (int j=i/2+1; j<k/2; j++) ans2 += abs(a[j*2+1]-a[j*2+2]);
            }
            ansmin = min(ansmin,ans2);
        }
        cout << ansmin << endl;
        return 0;
    }
return 0;
}