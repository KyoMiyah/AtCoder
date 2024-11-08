#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    ll n26 = 1;
    ll ans = 0;
    rep(i,n) {
        char c = s.back();
        int nc = c-'A'+1;
        ans += nc * n26;
        n26 *= 26;
        s.pop_back();
    }
    cout << ans << endl;
return 0;
}