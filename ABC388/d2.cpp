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
        int cnt = min(n-i-1, a[i]);
        a[i] -= cnt;

    }

    
    rep(i,n) cout << a[i] << ' ';
    cout << endl;
return 0;
}