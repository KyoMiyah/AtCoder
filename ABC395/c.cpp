#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
        a[i]--;
    }
    vector<vector<int>> cnt(1e6);
    int ans = 1e9;
    rep(i,n) {
        cnt[a[i]].push_back(i);
        int n = cnt[a[i]].size();
        if (n != 1) ans = min(ans, cnt[a[i]][n-1] - cnt[a[i]][n-2] + 1);
    }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}