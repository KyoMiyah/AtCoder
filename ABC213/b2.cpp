#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i,n) cin >> a[i].first;
    rep(i,n) a[i].second = i+1;
    sort(a.rbegin(),a.rend());
    int ans = a[1].second;
    cout << ans << endl;
return 0;
}