#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
const int mod = 998244353;

int main() {
    ll n;
    cin >> n;

    int keta = 0;
    ll nn = n;
    while (nn > 0) {
        keta++;
        nn /= 10;
    }

    int ans = 0;
    int cnt = 0;
    while(keta > 0) {
        ll start = 1;
        ll end;
        if (cnt != 0) {
            end = 1;
            rep(j,keta-1) end *= 10;
            end *= 9;   
        }
        else {
            ll minu = 1;
            rep(j,keta-1) minu *= 10;
            minu -= 1;
            end = n - minu;
        }
        ll sum = ((start+end)%mod)*(end%mod)/2;
        sum %= mod;
        ans += sum;
        ans %= mod;
        n /= 10;

        keta--;
        cnt ++;
        //cout << ans << endl;
    }

    cout << ans << endl;

return 0;
}