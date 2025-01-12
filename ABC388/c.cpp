#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.rbegin(), a.rend());

    ll ans = 0;
    int start = 0, end = 0;
    while (start < n && end < n) {
        while (end < n && a[end] * 2 > a[start]) end++;
        ans += (n-end);
        start ++;
    }

    cout << ans << endl;
return 0;
}