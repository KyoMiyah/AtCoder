#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n),s1(n), s2(n), s3(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    rep(i,n) rep(j,n) {
        s1[i][j] = '.';
        s2[i][j] = '.';
        s3[i][j] = '.';
    }
    int ans = 1e9;

    int cnt = 0;
    rep(i,n) rep(j,n) if (s[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    rep(a,n) rep(b,n) s1[b][n-a-1] = s[a][b];
    cnt = 1;
    rep(i,n) rep(j,n) if (s1[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt); 
    
    rep(a,n) rep(b,n) s2[b][n-a-1] = s1[a][b];
    cnt = 2;
    rep(i,n) rep(j,n) if (s2[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    rep(a,n) rep(b,n) s3[b][n-a-1] = s2[a][b];
    cnt = 3;
    rep(i,n) rep(j,n) if (s3[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    cout << ans << endl;

return 0;
}