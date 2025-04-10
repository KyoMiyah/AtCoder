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
        ll b = sqrt(nn);
        ans += b;
        int cnt = 0;
        while(b/2 > 0) {
            b /= 2;
            cnt++;
        }
        ans -= cnt;
    }

    cout << ans << endl;
return 0;
}