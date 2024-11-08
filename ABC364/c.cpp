#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; ll x, y;
    cin >> n >> x >> y;
    vector<int>a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    ll sweet = 0, salty = 0;
    int ans1=0, ans2=0;
    rep(i,n) {
        ans1++;
        sweet += a[i];
        if (sweet > x) break;
    }

    rep(i,n) {
        ans2++;
        salty += b[i];
        if (salty > y) break;
    }

    int ans = min(ans1,ans2);

    cout << ans << endl;
 
return 0;
}