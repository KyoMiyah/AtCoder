#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    if (a.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    
    ll tot = 0;
    rep(i,n) tot += a[i];
    vector<int> ans2(n);
    rep(i,n) ans2[i] = tot/n;
    rep(i,tot%n) ans2[i] += 1;
    sort(ans2.begin(),ans2.end());

    rep(i,n) ans += abs(ans2[i]-a[i]);

    cout << ans/2 << endl;
return 0;
}