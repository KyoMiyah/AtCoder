#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll d;
    cin >> d;

    ll ans = 2*1e6;
    for (ll x=0; x<2*1e6; x++) {
        ll y = sqrt(d-x*x);
        ll y1 = y+1;
        ll ans1 = abs(y*y + x*x - d);
        ll ans2 = abs(y1*y1 + x*x - d);
        ans = min(ans,min(ans1,ans2));
    }

    cout << ans << endl;
return 0;
}