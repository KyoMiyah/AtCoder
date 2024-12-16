#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(2*n);
    rep(i,2*n) cin >> a[i];

    vector<P> b(2*n);
    rep(i,2*n) {
        b[i].first = 0;
        b[i].second = -1*i;
    }

    rep(k,m) {
        vector<P> c = b;
        sort(c.rbegin(),c.rend());
        rep(l,n) {
            if (a[-1*c[2*l].second][k] == 'G' && a[-1*c[2*l+1].second][k] == 'C') b[-1*c[2*l].second].first ++;
            if (a[-1*c[2*l].second][k] == 'C' && a[-1*c[2*l+1].second][k] == 'G') b[-1*c[2*l+1].second].first ++;
            if (a[-1*c[2*l].second][k] == 'G' && a[-1*c[2*l+1].second][k] == 'P') b[-1*c[2*l+1].second].first ++;
            if (a[-1*c[2*l].second][k] == 'P' && a[-1*c[2*l+1].second][k] == 'G') b[-1*c[2*l].second].first ++;
            if (a[-1*c[2*l].second][k] == 'C' && a[-1*c[2*l+1].second][k] == 'P') b[-1*c[2*l].second].first ++;
            if (a[-1*c[2*l].second][k] == 'P' && a[-1*c[2*l+1].second][k] == 'C') b[-1*c[2*l+1].second].first ++;
        }
    }

    sort(b.rbegin(),b.rend());
    rep(i,2*n) {
        cout << (-1*b[i].second)+1 << endl;
    }
return 0;
}