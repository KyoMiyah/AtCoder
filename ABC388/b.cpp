#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> t(n), l(n);
    rep(i,n) cin >> t[i] >> l[i];
    rep(i,d) {
        int ans = 0;
        rep(j,n) {
            l[j] ++;
            ans = max(l[j] * t[j], ans);
        }    
        cout << ans << endl;
    }
return 0;
}