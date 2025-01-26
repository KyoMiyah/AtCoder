#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) {
        int x;
        cin >> x;
        a[i] = x%m;
    }
    ll ans = 0;
    for (int s=0; s<n; s++) {
        ll dis = 0;
        if (s+1 < n) for (int t=s+1; t<n; t++) {
            dis += a[t];
            dis %= m;
            if (dis == 0) ans++;
        }
        for (int t=0; t<s; t++) {
            dis += a[t];
            dis %= m;
            if (dis == 0) ans++;            
        }
    }

    cout << ans << endl;
return 0;
}