#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

bool right(int xa, int ya, int xb, int yb, int xc, int yc) {
    if ((xb-xa)*(xb-xc)+(yb-ya)*(yb-yc) == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(a,n) rep(b,a) rep(c,b) {
        if (right(x[a],y[a],x[b],y[b],x[c],y[c]) || right(x[b],y[b],x[c],y[c],x[a],y[a]) || right(x[c],y[c],x[a],y[a],x[b],y[b])) {
            ans++;
            continue;
        }
        bool ok = true;
        if ((x[b]-x[a])/(x[c]-x[a]) == (y[b]-y[a])/(y[c]-y[a])) ok = false;
        if (ok) {
            ans++;
        }
    }

    cout << ans << endl;
return 0;
}