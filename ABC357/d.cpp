#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll p = 998244353;
    ll n;
    cin >> n;

    ll ans = n % p;

    int keta = 0;
    ll nn = n;
    while (nn != 0) {
        nn /= 10;
        keta++;
    }

    ll x = 1;
    rep(i,keta) x *= 10;

    ll xx = 1;
    ll ans2 = 0;
    rep(i,n) {
        ans2 += xx;
        ans2 %= p;
        xx *= x;
    }

    ans *= ans2;
    ans %= p;
    cout << ans << endl;
return 0;
}