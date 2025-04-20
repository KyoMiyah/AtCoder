#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<int,set<int>> ton, tom;
    rep(i,m) {
        int k;
        cin >> k;
        rep(nk,k) {
            int a;
            cin >> a;
            ton[a].insert(i+1);
            tom[i+1].insert(a);
        }
    }

    vector<int> b(n), ans(n+1);
    rep(i,n) cin >> b[i];
    reverse(b.begin(), b.end());
    ans[0] = m;
    set<int> cant;

    rep(i,n) {
        for (int x : ton[b[i]]) {
            cant.insert(x);
        }
        ans[i+1] = m-cant.size();
    }

    reverse(ans.begin(), ans.end());
    for (int i=1; i<=n; i++) cout << ans[i] << endl;

return 0;
}