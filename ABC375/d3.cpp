#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    if (s.size() <= 2) {
        cout << 0 << endl;
        return 0;
    }
    vector<vector<int>> left(26), right(26);
    left[s[0]-'A'].push_back(0);
    for (int i=2; i<s.size(); i++) right[s[i]-'A'].push_back(i);

    ll ans = 0;
    for (int j=1; j<s.size()-1; j++) {
        rep(l,26) ans += left[l].size() * right[l].size();
        left[s[j]-'A'].push_back(j);
        right[s[j+1]-'A'].pop_back();
    }
    cout << ans << endl;
return 0;
}