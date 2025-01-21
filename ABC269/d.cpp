#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> dp0(n), dp1(n);
    dp1[0] = a[0];
    dp1[1] = a[1];
    dp0[1] = a[0] + 2*a[1];
    if (n >= 2) {
        for (int i=2; i<n; i++) {
            dp0[i] = max(2*a[i] + dp1[i-1], 2*a[i] + dp1[i-2]);
            dp1[i] = max(a[i] + dp0[i-1], a[i] + dp0[i-2]);
        }
    }

    ll ans = max(dp0[n-1], dp1[n-1]);
    cout << ans << endl;
return 0;
}