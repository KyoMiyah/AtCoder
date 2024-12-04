#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<ll> a(60);
    a[0] = 1;
    ll x = 1;
    for (int i=1; i<60; i++) {
        x *= 2;
        a[i] = a[i-1] + x; 
    }

    ll k;
    cin >> k;
    if (k == 1) {
        cout << 2 << endl;
        return 0;
    }

    int keta;
    ll num;
    rep(i,60) {
        num = k - a[i];
        keta = i+1;
        if (num <= 0) {
            num = k - a[i-1];
            break;
        }
    }

    string ans;
    ans += '2';
    ll big = a[keta-1]-a[keta-2];
    ll small = 1;
    rep(i,keta-1) {
        ll mid = (small + big)/2;
        if (num <= mid) {
            ans += '0';
            big = mid;
        }
        else {
            ans += '2';
            small = mid+1;
        }
    }

    cout << ans << endl;


return 0;
}