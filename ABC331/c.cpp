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

    vector<int> b = a;
    sort(b.begin(),b.end());
    vector<ll> asum(1e6);
    rep(i,asum.size()) {
        
    }


    rep(i,n) {
        ll ans = 0;
        rep(j,n) {
            if (a[j] > a[i]) ans += a[j];
        }
        cout << ans << ' ';
    }
    cout << endl;

return 0;
}