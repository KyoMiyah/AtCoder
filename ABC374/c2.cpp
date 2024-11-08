#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    rep(i,n) cin >> k[i];
    int ans = 1e9;

    rep(s,1<<n) {
        int a = 0, b = 0;
        rep(i,n) {
            if (s >> i & 1) b += k[i];
            else a += k[i];
        }
        int now = max(a,b);
        ans = min(ans, now);
    }
    cout << ans << endl;
}