#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<P> a(n), b(n);
    rep(i,n) cin >> a[i].first >> b[i].first;
    rep(i,n) {
        a[i].second = i+1;
        b[i].second = i+1;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> aa(n), bb(n);

    aa[0] = 0;
    bb[0] = 0;

    for (int i=1; i<n; i++) {
        if (a[i].first == a[i-1].first) aa[i] = aa[i-1];
        else aa[i] = aa[i-1] + 1;
        if (b[i].first == b[i-1].first) bb[i] = bb[i-1];
        else bb[i] = bb[i-1] + 1;
    }

    vector<P> ansa(n), ansb(n);
    rep(i,n) {
        ansa[i].second = aa[i];
        ansb[i].second = bb[i];
        ansa[i].first = a[i].second;
        ansb[i].first = b[i].second;
    }

    sort(ansa.begin(), ansa.end());
    sort(ansb.begin(), ansb.end());

    rep(i,n) cout << ansa[i].second+1 << ' ' << ansb[i].second+1 << endl;

    

return 0;
}