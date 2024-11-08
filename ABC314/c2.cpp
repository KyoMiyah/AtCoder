#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    vector<vector<int>> cc(m);
    rep(i,n) cc[c[i]-1].push_back(i);

    rep(i,m) {
        string ss;
        int x = cc[i].size();
        rep(j,x) ss += s[cc[i][j]];
        ss += ss;
        string t;
        for (int j=x-1; j<=x*2-2; j++) t += ss[j];
        rep(j,x) s[cc[i][j]] = t[j];
    }

    cout << s << endl;

return 0;
}