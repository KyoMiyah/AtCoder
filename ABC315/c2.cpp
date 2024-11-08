#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i,n) {
        int f, s;
        cin >> f >> s;
        f--;
        a[f].push_back(s);
    }

    int ans = 0;
    rep(i,n) {
        if (a[i].size() < 2) continue;
        sort(a[i].rbegin(),a[i].rend());
        int now = a[i][0]+a[i][1]/2;
        ans = max(ans, now);
    }

    vector<int> aa;
    rep(i,n) {
        if (a[i].size() == 0) continue; 
        aa.push_back(a[i][0]);
    }
    sort(aa.rbegin(),aa.rend());
    if (aa.size() >= 2) ans = max(ans, aa[0] + aa[1]);

    cout << ans << endl;

return 0;
}