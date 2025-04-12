#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    ll sum = 0;
    for (int i=0; i<=n; i++) {
        if (i<k) {
            a[i] = 1;
            sum = (sum + a[i]) % 1000000000;
        }
        else {
        a[i] = sum;
        sum = (sum + a[i] - a[i-k] + 1000000000) % 1000000000;
        }
    }

    cout << a[n]%1000000000 << endl;
return 0;
}