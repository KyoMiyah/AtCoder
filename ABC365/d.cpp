#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;

    vector<vector<int>> dp(n,vector<int>(3));
    if (s[0] == 'R') {
        dp[0][1] = 1;
    }
    else if (s[0] == 'P') {
        dp[0][2] = 1;
    }
    else if (s[0] == 'S') {
        dp[0][0] = 1;
    }
    rep(i,n-1) {
        if (s[i+1] == 'R') {
            dp[i+1][1] = max(dp[i][0]+1,dp[i][2]+1);
            dp[i+1][0] = max(dp[i][1],dp[i][2]);
            dp[i+1][2] = 0;
        }
        if (s[i+1] == 'P') {
            dp[i+1][2] = max(dp[i][0]+1,dp[i][1]+1);
            dp[i+1][1] = max(dp[i][0],dp[i][2]);
            dp[i+1][0] = 0;
        }
        if (s[i+1] == 'S') {
            dp[i+1][2] = max(dp[i][0],dp[i][1]);
            dp[i+1][0] = max(dp[i][1]+1,dp[i][2]+1);
            dp[i+1][1] = 0;
        }
    }

    if (s[n-1] == 'R') {
        cout << max(dp[n-1][1], dp[n-1][0]) << endl;
    }
    else if (s[n-1] == 'P') {
        cout << max(dp[n-1][1], dp[n-1][2]) << endl;
    }
    else if (s[n-1] == 'S') {
        cout << max(dp[n-1][2],dp[n-1][0]) << endl;
    }
return 0;
}