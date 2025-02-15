#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    rep(k,n) rep(j,k) rep(i,j) {
        if (s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
            if (k-j == j-i) ans++;
        }
    }
    cout << ans << endl;
return 0;
}