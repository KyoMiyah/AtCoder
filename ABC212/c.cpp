#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 1e9;
    int j = 0;
    rep(i,n) {
        while (j+1 < m && abs(a[i]-b[j]) >= abs(a[i]-b[j+1])) j++;
        ans = min(ans, abs(b[j]-a[i]));
    }

    cout << ans << endl;
return 0;
}