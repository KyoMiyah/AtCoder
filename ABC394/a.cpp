#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    string ans;
    rep(i,s.size()) if (s[i] == '2') ans += '2';
    cout << ans << endl;
return 0;
}