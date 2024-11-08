#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;

    sort(a.begin(),a.end());
    rep(i,n) {
        ans += a[i]*ll(n-1);
    }

    ll cnt = 0;
    rep(i,n) {
        int l = i, r = n-1;
        while(r >= 0 || a[i] + a[r] >= 1e8) r--;
        ans -= ll(n-max(r,i+1)-1)*(1e8);
    }

    cout << ans << endl;
return 0;
}