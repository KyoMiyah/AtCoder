#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    int amax = 1;
    ll x = 1;
    while (x * 2 <= n) {
        amax++;
        x *= 2;
    }

    int ans = 0;
    ll a2 = 1;
    for (int a=1; a<=amax; a++) {
        ll nn = n;
        a2 *= 2;
        if (n%a2 != 0) continue;
        nn /= a2;
        ll b = sqrt(nn);
        int cnt = 0;
        ll b2 = 1;
        while (b2*4 <= nn) {
            b2 *= 4;
            cnt++;
        }
        ans += b;
        ans -= cnt;
    }

    cout << ans << endl;
return 0;
}