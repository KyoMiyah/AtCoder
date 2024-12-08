#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> t(n), v(n);
    rep(i,n) cin >> t[i] >> v[i];
    int ans = v[0];
    for (int i=1; i<n; i++) {
        ans -= (t[i]-t[i-1]);
        if (ans < 0) ans = 0;
        ans += v[i];
    }

    cout << ans << endl;
return 0;
}