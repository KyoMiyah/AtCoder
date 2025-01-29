#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
//ABC364 D

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    rep(i,q) {
        int b, k;
        cin >> b >> k;
        auto f = [&] (int wj) -> bool {
            int l = b-wj, r = b+wj;
            int li = lower_bound(a.begin(), a.end(), l) - a.begin();
            int ri = lower_bound(a.begin(), a.end(), r+1) - a.begin();
            return ri - li >= k;
        };
        int ok = 2e8, ng = -1;
        while (ng + 1 < ok) {
            int mid = (ok+ng)/2;
            if (f(mid)) ok = mid;
            else ng = mid;
        }
        cout << ok << endl;
    }
return 0;
}