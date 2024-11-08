#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; string t;
    cin >> n >> t;
    vector<int> ans;
    
    rep(i,n) {
        string s;
        cin >> s;
        if (s == t) ans.push_back(i+1);

        if (s.size() == t.size()) {
            int cnt = 0;
            rep(j,s.size()) if (s[j] != t[j]) cnt++;
            if (cnt == 1) {
            ans.push_back(i+1);
        }
        }

        if (s.size() == t.size() + 1) {
            rep(j,s.size()) {
                string ss = s;
                ss.erase(j,1);
                if (ss == t) ans.push_back(i+1);
            }
        }

        if (s.size() +1 == t.size()) {
            rep(j,t.size()) {
                string tt = t;
                tt.erase(j,1);
                if (tt == s) ans.push_back(i+1);
            }
        }
    }

    cout << ans.size() << endl;
    rep(i,ans1.size()) cout << ans[i] << ' ';
    cout << endl;

return 0;
}