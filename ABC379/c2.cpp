#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    vector<ll> a(m);
    rep(i,m) cin >> x[i];
    rep(i,m) cin >> a[i];

    ll tot = 0;
    ll ans = 0;
    rep(i,m) {
        tot += a[i];
    }
    if (tot != n) {
        cout << -1 << endl;
        return 0;
    }


    ll cnt = a[0];
    rep(i,m-1) {
        ll dif = x[i+1] - x[i];
        cnt -= dif;
        if (cnt <= 0) {
            cout << -1 << endl;
            return 0;
        }
        cnt += a[i+1];
    }

    rep(i,m) {
        int last = a[i];
        last--;
        ll plus = (ll)last * (last+1) /2;
        ans += plus;
    }

    cout << ans << endl;

return 0;
}