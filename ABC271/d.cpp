#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> x(n+2), p(n);
    rep(i,n) cin >> x[i+1];
    rep(i,n) cin >> p[i];
    x[0] = -1e9-1; x[n+1] = 1e9+1;

    vector<ll> pp(n+1);
    for (int i=1; i<n+1; i++) pp[i] = pp[i-1] + p[i-1];

    int q;
    cin >> q;
    rep(nq,q) {
        int l, r;
        cin >> l >> r;
        int small = 0, big = n+1;
        while (small + 1 != big) {
            int mid = (small + big)/2;
            if (l <= x[mid]) big = mid;
            else small = mid;
        }
        int small1 = 0, big1 = n+1;
        while (small1 + 1 != big1) {
            int mid1 = (small1 + big1)/2;
            if (r < x[mid1]) big1 = mid1;
            else small1 = mid1;
        }

        cout << pp[small1]-pp[small] << endl;
    }
return 0;
}