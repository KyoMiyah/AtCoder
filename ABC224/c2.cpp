#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)


int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(a,n) rep(b,a) rep(c,b) {
        if ((x[b]-x[a])*(y[c]-y[a])-(x[c]-x[a])*(y[b]-y[a]) != 0) ans++;
    }

    cout << ans << endl;
return 0;
}