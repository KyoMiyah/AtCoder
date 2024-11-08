#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

ll sum(int n) {
    ll ans = 0;
    int num = 1;
    rep(i,n-2) {
        rep(j,i) {
            ans += j+1;
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    vector<vector<int>> a(26);
    rep(i,s.size()) a[s[i]-'A'].push_back(i);

    ll ans = 0;
    rep(i,26) if (a[i].size() >= 3) ans += a[i].size()*(a[i].size()-1)*(a[i].size()-2)/6;

    rep(i,26) if (a[i].size() >= 2) {
        for (int j=0; j<a[i].size(); j++) rep(k,j) ans += a[i][j] - a[i][k] - 1;
    }

    rep(i,26) if (a[i].size() >= 3) ans -= sum(a[i].size());

    cout << ans << endl;
return 0;
}