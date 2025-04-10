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

    set <ll> ans;
    ll a2 = 1;
    for (int a=1; a<=amax; a++) {
        a2 *= 2;
        for (int b=1; ; b++) {
            if (a2 * b * b > n) break;
            ans.insert(a2 * b * b);
        }
    }

    cout << ans.size() << endl;
return 0;
}