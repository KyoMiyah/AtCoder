#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    set<string> ans;
    rep(i,n) {
        set<string> can1 = ans;
        set<string> can2 = ans;
        can1.insert(s[i]);
        reverse(s[i].begin(),s[i].end());
        can2.insert(s[i]);
        if (can1.size() == can2.size()) ans.insert(s[i]);
    }

    cout << ans.size() << endl;
return 0;
}