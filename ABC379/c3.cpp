#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> xa(m);
    rep(i,m) cin >> xa[i].first;
    rep(i,m) cin >> xa[i].second;
    sort(xa.begin(), xa.end());
    xa.emplace_back(n+1,1);

    ll ans = 0;

    ll num = 1; int px = 0;
    for (auto [x,a] : xa) {
        ll L = x-px;
        ll carry = num - L;
        ans += (L-1)*L/2;
        ans += carry;
        if (carry < 0) {
            cout << -1 << endl;
            return 0;
        }
        
        px = x;
        num = carry + a;
    }

    if (num != 1) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}