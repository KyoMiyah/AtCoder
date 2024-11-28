#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    sort(a.rbegin(), a.rend());
    rep(i,n) {
        if (k==0) break;
        int use = a[i]/x;
        if (k>=use) {
        k -= use;
        a[i] -= use*x;
        }
        else {
            a[i] -= k*x;
            k = 0;
        }
    } 

    sort(a.rbegin(), a.rend());
    ll ans = 0;
    for (int i=k; i<n; i++) ans += a[i];
    cout << ans << endl;
return 0;
}