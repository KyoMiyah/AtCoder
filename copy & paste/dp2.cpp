#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
// ABC245 C
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1), b(n+1);
    rep(i,n) cin >> a[i+1];
    rep(i,n) cin >> b[i+1];

    vector<bool> dp(n+1), ep(n+1);
    dp[1] = true;
    ep[1] = true;

    for (int i=2; i<=n; i++) {
        if (dp[i-1]) {
            if (abs(a[i]-a[i-1]) <= k) dp[i] = true;
            if (abs(b[i]-a[i-1]) <= k) ep[i] = true;
        }
        if (ep[i-1]) {
            if (abs(a[i]-b[i-1]) <= k) dp[i] = true;
            if (abs(b[i]-b[i-1]) <= k) ep[i] = true;
        }
    }

    if (dp[n] || ep[n]) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}