#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int a, b;
    cin >> a >> b;
    int mag = a - b;
    int ans = 1;
    rep(i, mag) ans *= 32;
    cout << ans << endl;
return 0;
}