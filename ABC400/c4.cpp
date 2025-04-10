#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    int bok = 0, bng = 1e9+1;
    while (bok +1 != bng) {
        int bmid = (bok+bng)/2;
        if (bmid * bmid <= n) bok = bmid;
        else bng = bmid;
    }

    int ans = 0;
    for (int b=1; b<=bok; b += 2) {
        ll a2 = 1;
        for (int a=1; ; a++) {
            a2 *= 2;
            if (a2 * b * b > n) break;
            ans++;
        }
    }

    cout << ans << endl;
return 0;
}