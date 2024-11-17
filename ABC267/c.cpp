#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    ll tot1 = 0;
    rep(i,m) tot1 += (ll)a[i]*(i+1);
    ll ans = tot1;
    rep(i,n-m) {
        ll tot = tot1;
        rep(si,m) tot -= a[i+si];
        tot += (ll)m*a[i+m];
        ans = max(ans,tot);
        tot1 = tot;
    }

    cout << ans << endl;
return 0;
}