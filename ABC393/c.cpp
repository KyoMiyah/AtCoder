#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> a(n);
    int ans = 0;
    rep(i,m) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        if (a[u].count(v) || a[v].count(u) || v == u) {
            ans++;
            continue;
        }
        a[u].insert(v);
        a[v].insert(u);
    }
    cout << ans << endl;
return 0;
}