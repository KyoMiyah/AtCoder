#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    rep(i,n) {
        if ((s[i] - 'A' > 26) || (s[i] - 'A' < 0)) continue;
        else ans += s[i];
    }

    cout << ans << endl;
return 0;
}