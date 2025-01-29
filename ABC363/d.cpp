#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    n--;

    ll t = 0; int keta = 0; int odd = 0; ll s = 9;
    while(t <= n) {
        t += s;
        if (odd % 2 == 1) s *= 10;
        keta++;
        odd++;
    }

    cout << keta << endl;
return 0;
}