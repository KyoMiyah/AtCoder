#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    int ans =  1e8;
    rep(i,10) {
        vector<int> can(10);
        rep(j,n) rep(k,10) {
            if (int(s[j][k]-'0') == i) can[k]++;
        }
        int canmax = 0;
        rep(k,10) {
            if (can[k] != 0) {
                int can2 = 10*(can[k]-1)+k;
                canmax = max(canmax,can2);
            }
        }
        ans = min(ans, canmax);
    }

    cout << ans << endl;
return 0;
}