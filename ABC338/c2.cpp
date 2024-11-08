#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i,n) cin >> q[i];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    int ans = 0;

    rep(sa,1e6+1) {
        vector<int> r(n);
        rep(i,n) r[i] = q[i] - a[i]*sa;
        bool ok = true;
        rep(i,n) if (r[i] < 0) ok = false;
        if (!ok) break;

        int sb = 1e6;
        rep(i,n) if (b[i] != 0) {
            sb = min(sb,r[i]/b[i]);
        }
        ans = max(ans,sa+sb);
    }

    cout << ans << endl;

return 0;
}