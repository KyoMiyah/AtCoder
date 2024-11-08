#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<string> s(8);
    rep(i,8) cin >> s[i];
    int ans = 0;
    rep(i,8) rep(j,8) {
        bool ok = true;
        rep(k,8) if (s[i][k] == '#') ok = false;
        rep(k,8) if (s[k][j] == '#') ok = false;
        if (ok) ans++;
    }
    cout << ans << endl;
return 0;
}