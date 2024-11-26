#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    set<string> can;
    vector<P> ans;
    rep(i,n) {
        string s;
        int t;
        cin >> s >> t;
        if (can.count(s)) continue;
        can.insert(s);
        ans.emplace_back(t*-1,i+1);
    }
    sort(ans.begin(),ans.end());
    cout << ans[0].second << endl;
return 0;
}