#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll x, a, d, n;
    cin >> x >> a >> d >> n;

    if (d < 0) {
        ll end = a+d*(n-1);
        a = end;
        d *= -1; 
    }
    
    if (x <= a) {
        cout << a-x << endl;
        return 0;
    }

    ll end = a+d*(n-1);
    if (x >= end) {
        cout << x - end << endl;
        return 0;
    }

    x -= a;
    ll ans = min(x%d, d-x%d);
    cout << ans << endl;
return 0;
}