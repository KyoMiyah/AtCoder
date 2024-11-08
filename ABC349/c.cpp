#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;

    rep(i,3) t[i] = tolower(t[i]);

        vector<vector<int>> a(3,vector<int>(3));
        vector<vector<int>> b(2,vector<int>(2));
    if (t[2] != 'x') {
        rep(i,s.size()) {
            if (t[0] == s[i]) a[0].push_back(i);
            if (t[1] == s[i]) a[1].push_back(i);
            if (t[2] == s[i]) a[2].push_back(i);
        }
    }
    else {
        rep(i,s.size()) {
            if (t[0] == s[i]) b[0].push_back(i);
            if (t[1] == s[i]) b[1].push_back(i);
        }
    }

    if ((a[0][0] < a[1][0] && a[1][0] < a[2][0]) || (b[0][0] < b[1][0])) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}