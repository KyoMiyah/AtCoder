#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    vector<P> ans;
    rep(i,n) ans.emplace_back(a[i],0);
    rep(i,m) ans.emplace_back(b[i],1);
    sort(ans.begin(),ans.end());
    rep(i,m+n) if (ans[i].second == 0) cout << i+1 << ' ';
    cout << endl;
    rep(i,m+n) if (ans[i].second == 1) cout << i+1 << ' ';
    cout << endl;
return 0;
}