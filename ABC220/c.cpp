#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll x;
    cin >> x;

    ll tot = 0;
    rep(i,n) tot += a[i];
    ll cnt = x/tot;

    ll ans = cnt*n;
    ll rem = x-cnt*tot;
    int i = 0;
    while(rem>=0) {
        rem -= a[i];
        i++;
        ans++;
    }

    cout << ans << endl;
return 0;
}