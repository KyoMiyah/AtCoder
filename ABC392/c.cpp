#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i,n) {
        cin >> p[i];
        p[i]--;
    }
    rep(i,n) cin >> q[i];

    vector<P> ans(n);
    rep(i,n) {
        ans[i].first = q[i];
        ans[i].second = q[p[i]];
    }

    sort(ans.begin(), ans.end());
    rep(i,n) cout << ans[i].second << ' ';
    cout << endl;

    return 0;
}