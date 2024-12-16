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
        rep(l,n) {
            if (a[2*l][k] == 'G' && a[2*l+1][k] == 'C') b[2*l].first ++;
            if (a[2*l][k] == 'C' && a[2*l+1][k] == 'G') b[2*l+1].first ++;
            if (a[2*l][k] == 'G' && a[2*l+1][k] == 'P') b[2*l+1].first ++;
            if (a[2*l][k] == 'P' && a[2*l+1][k] == 'G') b[2*l].first ++;
            if (a[2*l][k] == 'C' && a[2*l+1][k] == 'P') b[2*l].first ++;
            if (a[2*l][k] == 'P' && a[2*l+1][k] == 'C') b[2*l+1].first ++;
        }
        sort(c.rbegin(),c.rend());
    }

    rep(i,2*n) {
        cout << (-1*b[i].second)+1 << endl;
    }
return 0;
}