#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    vector<P> aa;
    aa.emplace_back(a[0],1);
    rep(i,n-1) {
        int nn = aa.size();
        if (a[i+1] < aa[nn-1].first) aa.emplace_back(a[i+1],i+2);
    }

    int aan = aa.size();

    rep(i,m) {
        if (b[i] < aa[aan-1].first) {
            cout << -1 << endl;
            continue;
        }
        int no = -1, yes = aan;
        while (no+1 != yes) {
            int mid = (yes+no)/2;
            if (aa[mid].first <= b[i]) yes = mid;
            else no = mid;
        }
        cout << aa[yes].second << endl;
    }

return 0;
}