#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, ll>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> xa(n);
    vector<int> x(m);
    vector<ll> a(m);
    rep(i,m) cin >> x[i];
    rep(i,m) cin >> a[i];

    ll tot = 0;
    rep(i,m) tot += a[i];
    if (tot != n) {
        cout << -1 << endl;
        return 0;
    }

    rep(i,m) {
        int xx = x[i];
        xx--;
        xa[xx].second = a[i];
    }

    rep(i,n) xa[i].first = i;


    ll cnt = xa[0].second;
    ll ans = 0;
    for (int i=1; i<n; i++) {
        ans += cnt-1;
        cnt--;
        cnt += xa[i].second;
        if (cnt == 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;

return 0;
}