#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    int l = 1, r = 2;
    int ans = 0;

    rep(i,q) {
        char h;
        int t;
        cin >> h >> t;

        if (h == 'R') {
            if (l < r && r < t) ans += (t-r);
            if (l < t && t < r) ans += (r-t);
            if (r < l && l < t) {
                ans += r;
                ans += (n-t);
            }
            if (r < t && t < l) ans += (t-r);
            if (t < r && r < l) ans += (r-t);
            if (t < l && l < r) {
                ans += (n-r);
                ans += t;                
            }
            r = t;
        }

        if (h == 'L') {
            if (l < r && r < t) {
                ans += l;
                ans += (n-t);
            }
            if (l < t && t < r) ans += (t-l);
            if (r < l && l < t) ans += (t-l);
            if (r < t && t < l) ans += (l-t);
            if (t < r && r < l) {
                ans += (n-l);
                ans += t;
            }
            if (t < l && l < r) ans += (l-t);
            l = t;           
        }
    }

    cout << ans << endl;
return 0;
}