#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int> (w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    int tot = h + w - 2;
    int ans = 0;
    for (int x=0; x < (1<<tot); x++) {
        int cnt = 1;
        int i = 0, j = 0;
        set<int> b;
        b.insert(a[i][j]);
        rep(nx,tot) {
        if (x>>nx&1) i++;
        else j++;
        if (i >= h || j >= w) break;
        b.insert(a[i][j]);
        cnt++;
        }
        if (cnt == b.size() && cnt == tot) ans++;
    }
    cout << ans << endl;
return 0;
}