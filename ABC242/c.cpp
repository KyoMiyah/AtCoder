#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
const int mod = 998244353;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> dp(n+1,vector<int>(10));
    for (int j=1; j<=9; j++) dp[1][j] = 1;
    for (int i=2; i<=n; i++) {
        for (int j=1; j<=9; j++) {
            if (j-1 >= 1) {
                dp[i][j] += dp[i-1][j-1];
                dp[i][j] %= mod;
            }
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= mod;
            if (j+1 <= 9) {
                dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= mod;
            }
        }
    }
    int ans = 0;
    for (int j=1; j<=9; j++) {
        ans += dp[n][j];
        ans %= mod;
    }

    cout << ans << endl;
return 0;
}