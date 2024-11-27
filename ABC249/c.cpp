#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    int ans = 0;

    for (int x=0; x < (1<<n); x++) {
        vector<int> cnt(26);
        rep(nx,n) {
        if (x>>nx&1) {
            rep(i,s[nx].size()) {
                cnt[int(s[nx][i]-'a')]++;
            }
        }
        }
        int can = 0;
        rep(i,26) if(cnt[i] == k) can++;
        ans = max(ans,can);
    }

    cout << ans << endl;
return 0;
}