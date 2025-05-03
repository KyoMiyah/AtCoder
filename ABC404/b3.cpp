#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

    int ans = 1e9;
    int cnt = 0;
    rep(i,n) rep(j,n) if (s[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    vector<string> s1 = s;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        s1[ni][nj] = s[i][j];
    }
    cnt = 1;
    rep(i,n) rep(j,n) if (s1[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    cout << endl;
    rep(i,n) {
        rep(j,n) cout << s1[i][j];
        cout << endl;
    }

    vector<string> s2 = s1;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        s2[ni][nj] = s1[i][j];
    }  
    cnt = 2;
    rep(i,n) rep(j,n) if (s2[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt); 
    
    vector<string> s3 = s2;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        s3[ni][nj] = s2[i][j];
    }  
    cnt = 3;
    rep(i,n) rep(j,n) if (s3[i][j] != t[i][j]) cnt++;
    ans = min(ans,cnt);

    cout << ans << endl;
return 0;
}