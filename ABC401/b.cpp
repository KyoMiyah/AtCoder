#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    bool log = false;
    rep(i,n) {
        string s;
        cin >> s;
        if (!log && s == "private") ans++;
        if (s == "login") log = true;
        if (s == "logout") log = false;
    }

    cout << ans << endl;
return 0;
}