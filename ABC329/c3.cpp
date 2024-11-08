#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;

    vector<pair<char,int>> d;
    d.emplace_back(s[0],0);
    rep(i,n) {
        if (s[i] == d.back().first) d.back().second++;
        else d.emplace_back(s[i],1);
    }

    vector<int> cnt(26);
    for (auto [c,len] : d) {
        cnt[c-'a'] = max(cnt[c-'a'], len);
    }

    int ans = 0;
    rep(i,26) ans += cnt[i];

    cout << ans << endl;
return 0;
}