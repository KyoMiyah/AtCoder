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
        int sb = 1e6;
        rep(i,n) if (b[i] != 0) {
            sb = min(sb,(q[i]-a[i]*sa)/b[i]);
        }
        bool hantei = true;
        rep(i,n) if (a[i]*sa+b[i]*sb > q[i]) {
            hantei = false;
            break;
            }
            if (hantei) ans = max(ans,sa+sb);
    }

    cout << ans << endl;

return 0;
}