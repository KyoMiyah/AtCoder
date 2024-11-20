#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    set<P> same;
    ll ans = 0;
    rep(i,n) {
        if (same.count(P(i+1,a[i])) || same.count(P(a[i],i+1))) ans++;
        same.emplace(i+1,a[i]);
        same.emplace(a[i],i+1);
    }
    
    ll cnt = 0;
    rep(i,n) if (i+1 == a[i]) cnt++;
    ans += cnt*(cnt-1)/2;

    cout << ans << endl;

return 0;
}