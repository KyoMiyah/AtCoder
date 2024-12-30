#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; ll s;
    cin >> n >> s;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll tot = 0;
    rep(i,n) tot += a[i];

    s %= tot;

    vector<ll> aa(2*n+1);
    rep(i,n) aa[i+1] = aa[i] + a[i];
    for (int i=n; i<2*n; i++) aa[i+1] = aa[i] + a[i-n];

    set<ll> ans;
    rep(i,2*n+1) ans.insert(aa[i]);

    rep(i,2*n+1) {
        ll l = aa[i] - s;
        if (ans.count(l)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
return 0;
}