#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(i1,h) rep(j1,w) rep(i2,h) rep(j2,w) {
        if (s[i1][j1] == '#' || s[i2][j2] == '#') continue;
        if (i1 == i2 && j1 == j2) continue;
        int cnt = 0;
        rep(i,h) rep(j,w) {
            if (s[i][j] == '#') continue;
            if ((abs(i-i1)+abs(j-j1) <= d) || (abs(i-i2)+abs(j-j2) <= d)) cnt++;
        }
        ans = max(ans,cnt);
    }

    cout << ans << endl;
return 0;
}