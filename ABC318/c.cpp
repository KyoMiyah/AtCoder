#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> f(n);
    rep(i,n) cin >> f[i];

    sort(f.begin(),f.end());
    ll tot = 0;
    while(f.size() > 0) {
        ll tot2 = 0;
        int nn = max(0,(int)f.size()-d);
        for (int i=f.size()-1; i>=nn; i--) tot2 += f[i];
        tot += min((ll)p,tot2);
        if (f.size() > d) rep(i,d) f.pop_back();
        else f = {};
    }

    cout << tot << endl;
return 0;
}