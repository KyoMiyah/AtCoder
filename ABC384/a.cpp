#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    char c1, c2;
    cin >> n >> c1 >> c2;
    string s;
    cin >> s;
    string ans;
    rep(i,n) {
        if (s[i] != c1) ans += c2;
        else ans += s[i];
    }

    cout << ans << endl;
return 0;
}