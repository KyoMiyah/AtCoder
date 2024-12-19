#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

    vector<int> dp(n+1);
    dp[0] = t[0];
    for (int i=1; i<=n; i++) {
        if (i != n) dp[i] = min(dp[i-1]+s[i-1], t[i]);
        else dp[i] = dp[i-1]+s[i-1];
    }
    dp[0] = min(dp[0],dp[n]);
    for (int i=1; i<n; i++) {
        dp[i] = min(dp[i-1]+s[i-1], t[i]);
    }

    rep(i,n) cout << dp[i] << endl;
return 0;
}