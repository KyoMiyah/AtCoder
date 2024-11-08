#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; ll t;
    cin >> n >> t;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> tot(n+1);
    for (int i=1; i<n+1; i++) {
        tot[i] = tot[i-1] + a[i-1];
    }

    ll tot2 = 0;
    rep(i,n) tot2 += a[i];

    ll amari = t%tot2;

    rep(i,n) {
        if (tot[i] < amari && amari < tot[i+1]) {
            cout << i+1 << endl;
            cout << amari - tot[i] << endl;
        }
    }
return 0;
}