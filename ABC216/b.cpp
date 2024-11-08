#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    rep(i,n) cin >> s[i] >> t[i];
    bool ans = false;
    rep(i,n) rep(j,i) if (s[i] == s[j] && t[i] == t[j]) ans = true;
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}