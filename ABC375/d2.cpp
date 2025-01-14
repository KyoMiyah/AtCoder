#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<vector<ll>> abc(26);
    rep(i,s.size()) abc[s[i]-'A'].push_back(i);

    ll ans = 0;
    for (auto v : abc) {
        if (v.size() >= 2) {
            for (int j=1; j<v.size(); j++) rep(i,j) {
                ans += v[j] - v[i] - 1;
            }
        }
    }
    cout << ans << endl;
return 0;
}