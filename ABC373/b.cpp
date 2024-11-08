#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    rep(i,25) {
        int start, end;
        rep(j,26) if (s[j] == char('A'+i)) start = j;
        rep(j,26) if (s[j] == char('A'+i+1)) end = j;
        ans += abs(start-end);
    }
    cout << ans << endl;
return 0;
}