#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i];

    rep(i,n) {
        a[i] += b[i];
        int cnt = min((ll)n-i-1, a[i]);
        a[i] -= cnt;
        for (int j=i+1; j<i+1+cnt; j++) b[j]++;
    }
 
    rep(i,n) cout << a[i] << ' ';
    cout << endl;
return 0;
}