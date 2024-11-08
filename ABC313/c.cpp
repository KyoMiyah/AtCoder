#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    if (a.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    while(a.back()-a[0]>1) {
        rep(j,n/2) {
            int m = a[j] + a[n-1-j];
            ans += (m/2-a[j]);
            if (m%2 == 0) {
                a[j] = m/2;
                a[n-1-j] = m/2;
            }
            else {
                a[j] = m/2;
                a[n-1-j] = m/2+1;
            }
        }
        sort(a.begin(),a.end());
    }

    cout << ans << endl;
return 0;
}