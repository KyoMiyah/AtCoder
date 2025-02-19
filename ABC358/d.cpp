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

    int i = 0;
    ll tot = 0;
    rep(j,m) {
        while (a[i] < b[j] && i < n) i++;
        if (i > n-1) {
            cout << -1 << endl;
            return 0;
        }
        tot += a[i];
        i++;
    }

    cout << tot << endl;
return 0;
}