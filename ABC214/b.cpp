#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    rep(a,101) rep(b,101) rep(c,101) {
        if (a + b + c <= s && a * b * c <= t) cnt ++;
    }
    cout << cnt << endl;
return 0;
}