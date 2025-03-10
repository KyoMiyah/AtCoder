#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> b(n), w(m);
    rep(i,n) cin >> b[i];
    rep(i,m) cin >> w[i];
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());
    ll tot = 0;

    vector<ll> bb(n), ww(m);
    bb[0] = b[0]; ww[0] = w[0];
    rep(i,n-1) bb[i+1] = bb[i] + b[i+1];
    rep(i,m-1) ww[i+1] = ww[i] + w[i+1];
    ll wmax = 0;
    int wi = -1;

    rep(i,m) {
        if (wmax < ww[i]) {
            wmax = ww[i];
            wi = i;
        }
    }
    
    if (wi == -1) {
        rep(i,n) tot = max(tot,bb[i]);
        cout << tot << endl;
        return 0;
    }

    rep(i,n) {
        ll cnt = bb[i];
        if (i < wi) cnt += ww[i];
        else cnt += wmax;
        tot = max(cnt,tot);
    }

    cout << tot << endl;
return 0;
}