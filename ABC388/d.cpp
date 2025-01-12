#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    rep(i,n) {
        if (i == 0) continue;
        ll cnt = 0;
        rep(j,i) {
            if (a[j] != 0) {
                a[j]--;
                cnt++;
            }
        }
        a[i] += cnt;
    }

    rep(i,n) cout << a[i] << ' ';
    cout << endl;
return 0;
}