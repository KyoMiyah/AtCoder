#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll p, q, r, s;
    cin >> p >> q >> r >> s;

    int y = q-p+1, x = s-r+1;

    for (ll i=p; i<=q; i++) {
        for (ll j=r; j<=s; j++) {
            if (abs(i-a) == abs(j-b)) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }

return 0;
}