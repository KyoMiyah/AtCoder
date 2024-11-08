#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> q(n), r(n);
    rep(i,n) cin >> q[i] >> r[i];
    int Q;
    cin >> Q;
    rep(i,Q) {
        int t, d;
        cin >> t >> d;
        t--;
            int rem = d % q[t];
            int ans;
            if (rem <= r[t]) {
                ans =d - d%q[t] + r[t];
            }
            else {
                ans = q[t] - d%q[t] + d + r[t];
            }
            cout << ans << endl;
    }
return 0;
}