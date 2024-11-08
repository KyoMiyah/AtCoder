#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    set<string> ans;
    rep(i,n) {
        if (ans.count(s[i])) continue;
        reverse(s[i].begin(), s[i].end());
        if (ans.count(s[i])) continue;
        ans.insert(s[i]);
    }

    cout << ans.size() << endl;
return 0;
}