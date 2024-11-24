#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    if (x <= a && d >= 0) {
        cout << a-x << endl;
        return 0;
    }
    if (x >= a && d <= 0) {
        cout << x-a << endl;
        return 0;
    }
    ll end = a+d*(n-1);
    if (x >= end && d>= 0) {
        cout << x - end << endl;
        return 0;
    }
    if (x <= end && d<= 0) {
        cout << end - x << endl;
        return 0;
    }

    x -= a;
    if (x < 0) x *= -1;
    ll ans = min(x%d, d-x%d);
    cout << ans << endl;
return 0;
}