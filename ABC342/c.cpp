#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;

    vector<vector<int>> a(26);
    rep(i,n) {
        int x = s[i]-'a';
        a[x].push_back(i);
    }

    rep(i,q) {
        int c, d;
        cin >> c >> d;
        int x = c-'a', y = d-'a';
        rep(j,a[x].size()) {
            a[y].push_back(a[x][j]);
        }
        a[x] = {};
    }

    string ans;
    rep(k,n) rep(i,26) rep(j,a[i].size()) {
        if (a[i][j] == k) ans += char(a[i][j]+'a');
    }

    cout << ans << endl;
return 0;
}