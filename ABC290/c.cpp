#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    set<int> aa;
    rep(i,n) aa.insert(a[i]);
    int ans = 0;
    rep(i,k) {
        if (!aa.count(i)) break;
        else ans++;
    }
    cout << ans << endl;
return 0;
}