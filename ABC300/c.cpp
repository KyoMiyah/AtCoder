#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    rep(i,h) cin >> c[i];

    int n = min(h,w);
    vector<int> ans(n);

    for (int si=1; si<h-1; si++) for (int sj=1; sj<w-1; sj++) {
        if (c[si][sj] == '#' && c[si+1][sj+1] == '#' && c[si-1][sj-1] == '#' && c[si+1][sj-1] == '#' && c[si-1][sj+1] == '#') {
            int x = 1;
            while (si-x>=0 && si+x<h && sj-x>=0 && sj+x<w && c[si+x][sj+x] == '#' && c[si-x][sj-x] == '#' && c[si+x][sj-x] == '#' && c[si-x][sj+x] == '#') {
                x++;
            }
            ans[x-2]++;
        }
    }

    rep(i,n) cout << ans[i] << ' ';
    cout << endl;
return 0;
}