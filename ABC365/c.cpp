#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll m;
    cin >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    ll total = 0;
    rep(i,n) total += a[i];
    if (m >= total) {
        cout << "infinite" << endl;
        return 0;
    }

    int l = 0, r = 1e9+1;
    while(r-l != 1) {
        int mid = (l+r)/2;
        ll mm = 0;
        rep(i,n) mm += min(a[i],mid);
        if (mm > m) r = mid;
        else l = mid;
    }
    cout << l << endl;
}