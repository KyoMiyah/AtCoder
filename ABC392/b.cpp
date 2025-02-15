#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> ans;

    for (int i=1; i<=n; i++) {
        bool ok = false;
        rep(j,m) if (i == a[j]) ok = true;
        if (!ok) ans.push_back(i);
    }
    cout << ans.size() << endl;
    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
return 0;
}