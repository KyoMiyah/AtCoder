#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int s = 0;
    vector<int> r(n);

    rep(i,n) {
        a[i] += s;
        s++;
        int cnt = min(a[i], n-i-1);
        a[i] -= cnt;
        r[i+cnt]++;
        s -= r[i];
    }

    rep(i,n) cout << a[i] << ' ';
    cout << endl;
return 0;
}