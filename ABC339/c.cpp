#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll cnt = 0;
    bool hantei = true;
    rep(i,n) {
        cnt += a[i];
        if (cnt < 0) {
            hantei = false;
            break;
        }
    }
    if (hantei) {
        cout << cnt << endl;
        return 0;
    }

    ll yes = 1e15, no = 0;
    while (yes != no + 1) {
        ll mid = (yes+no)/2;
        bool hantei = true;
        ll cnt = mid;
    rep(i,n) {
        cnt += a[i];
        if (cnt < 0) {
            hantei = false;
            break;
        }
    }
    if (hantei) {
        yes = mid;
    }
    else no = mid;
    }

    ll ans = yes;
    rep(i,n) ans += a[i];

    cout << ans << endl;


return 0;
}