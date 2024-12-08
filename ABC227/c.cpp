#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll a=1; a*a*a <= n; a++) for (ll b=a; a*b*b <= n; b++) {
        ll ab = a*b;
        ans += (n/ab-b+1);
    }

    cout << ans << endl;
return 0;
}