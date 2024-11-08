#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int ab=1; ab<n; ab++) {
        for (int a=1; a<=ab; a++) {
            if (ab%a == 0) x[ab]++;
        }
    }
    ll ans = 0;
    for (int ab=1; ab<n; ab++) {
        int cd = n-ab;
        ll tot = x[ab] * x[cd];
        ans += tot;
    }

    cout << ans << endl;
return 0;
}