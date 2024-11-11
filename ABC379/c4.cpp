#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll,ll>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> xa(m+1);
    rep(i,m) cin >> xa[i].first;
    rep(i,m) cin >> xa[i].second;
    xa[m].first = n+1;
    xa[m].second = 1;
    sort(xa.begin(), xa.end());

    ll tot = 0;
    rep(i,m) tot += xa[i].second;
    if (tot != n) {
        cout << -1 << endl;
        return 0;
    }

    ll ans = 0;
    rep(i,m) {
        ll dif = xa[i+1].first - xa[i].first;
        if (dif > xa[i].second) {
            cout << -1 << endl;
            return 0;
        }
        ans += dif*(dif-1)/2;
        ans += (xa[i].second-dif)*dif;
    }

    cout << ans << endl;
return 0;
}