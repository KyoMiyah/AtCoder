#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    ll ans = (ll)n*max(a,b);

    rep(i,n) {
        ll cost = 0;
        string ss = s;
        rep(ni,i) {
            char x = ss[0];
            ss.erase(0,1);
            ss += x;
        }
        cost += (ll)a*i;

        rep(j,n/2) {
            if (ss[j] != ss[n-j-1]) cost += b;
        }

        ans = min(ans,cost);
    }

    cout << ans << endl;
return 0;
}