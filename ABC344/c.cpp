#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m, l, q;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    rep(i,m) cin >> b[i];
    cin >> l;
    vector<int> c(l);
    rep(i,l) cin >> c[i];
    cin >> q;
    vector<int> x(q);
    rep(i,q) cin >> x[i];

    set<int> can;
    rep(na,n) rep(nb,m) rep(nc,l) can.insert(a[na]+b[nb]+c[nc]);

    rep(i,q) {
        if (can.count(x[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
return 0;
}