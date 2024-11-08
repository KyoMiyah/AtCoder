#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n-1);
    rep(i,n) cin >> a[i];
    rep(i,n-1) cin >> b[i];

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    int j = 0;
    int mis = 0;
    int ans = 0;
    rep(i,n) {
        if (mis > 1) break;
        if (b[j] >= a[i]) j++;
        else {
            mis++;
            ans = a[i];
        }
    }

    if (mis > 1) cout << -1 << endl;
    else cout << ans << endl;
return 0;
}