#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll x;
    cin >> x;
    for (int ns=1; ns<=20; ns++) {
        ll tot = 1;
        for (int i=1; i<=ns; i++) {
            tot *= i;
        }
        if (tot == x) cout << ns << endl;
    }
return 0;
}