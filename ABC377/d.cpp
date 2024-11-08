#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> lr;
    rep(i,n) {
        ll l, r;
        cin >> l >> r;
        if (lr.size() == 0) lr.emplace_back(l,r);
        else {
            bool ok = true;
            rep(j,lr.size()) if (lr[j].first <= l && lr[j].second >= r) lr.erase(lr.begin()+j); 
            rep(j,lr.size()) if (lr[j].first >= l && lr[j].second <= r) ok = false;
            if (ok) lr.emplace_back(l,r);
        }
    }

    sort(lr.begin(),lr.end());

    ll ans = m;
    rep(i,lr.size()-1) {
        ll x = lr[i].second-lr[i].first;
        if (x == 0) ans--;
        ll plus = (x+1)*x/2;
        ans += plus;
    }
    cout << ans << endl;
return 0;
}