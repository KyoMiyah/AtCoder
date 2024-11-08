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

    int samemax = 0, difmax = 0;
    rep(i,n) {
        if (a[i].size() < 2) continue;
        sort(a[i].rbegin(),a[i].rend());
        samemax = max(samemax, a[i][0]+a[i][1]/2);
    }

    vector<int> aa;
    rep(i,n) if(a[i].size()>0) aa.push_back(a[i][0]);
    sort(aa.rbegin(),aa.rend());
    difmax = max(difmax, aa[0] + aa[1]);

    int ans = max(samemax,difmax);

    cout << ans << endl;

return 0;
}