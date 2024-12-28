#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
const int di [] = {-1,0,1,0};
const int dv [] = {0,-1,0,1};

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--; y--;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    string t;
    cin >> t;
    vector<vector<bool>> have(h,vector<bool>(w));

    have[x][y] = true;
    int ans = 0;
    rep(i,t.size()) {
        if (t[i] == 'U') {
            if (s[x+di[0]][y+dv[0]] == '#') continue;
            x += di[0];
            y += dv[0];
        }
        if (t[i] == 'L') {
            if (s[x+di[1]][y+dv[1]] == '#') continue;
            x += di[1];
            y += dv[1];
        }
        if (t[i] == 'D') {
            if (s[x+di[2]][y+dv[2]] == '#') continue;
            x += di[2];
            y += dv[2];
        }
        if (t[i] == 'R') {
            if (s[x+di[3]][y+dv[3]] == '#') continue;
            x += di[3];
            y += dv[3];
        }
        if (!have[x][y] && s[x][y] == '@') {
            ans++;
            have[x][y] = true;
        }
    }

    cout << x+1 << ' ' << y+1 << ' ' << ans << endl;
return 0;
}