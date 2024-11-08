#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;

    rep(sj,h) rep(si,w) {
        if (s[sj][si] == '#') continue;
        bool ok = true;
        int i = si, j = sj;
        for (char c : t) {
            if (c == 'L') i--;
            if (c == 'R') i++;
            if (c == 'U') j--;
            if (c == 'D') j++;
            if (s[j][i] == '#') {
                ok = false;
                break;
            }
        }
        if (ok) ans ++;
    }

    cout << ans << endl;

return 0;
}