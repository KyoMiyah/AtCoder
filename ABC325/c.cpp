#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int n = h*w;
    dsu uf(n);

    rep(i,h) rep(j,w) {
        if (s[i][j] != '#') continue;
        for (int di=-1; di<=1; di++) {
            for (int dj=-1; dj<=1; dj++) {
                int ni = i+di, nj = i+dj;
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] != '#') continue;
                if (i == ni && j == nj) continue;
                uf.merge(i*w+j, ni*w+nj);
            }
        }
    }

    int ans = 0;
    rep(i,h) rep(j,w) {
        if (s[i][j] != '#') continue;
        int v = i*w+j;
        if (uf.leader(v) == v) ans++;
    }
    cout << ans << endl;
return 0;
}