#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    for (ll x=1; x<1e6+2; x++) {
        ll x3 = x*x*x;
        for (ll y=1; y<x; y++) {
            ll y3 = y*y*y;
            if (x3 - y3 == n) {
                cout << x << ' ' <<y << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
return 0;
}