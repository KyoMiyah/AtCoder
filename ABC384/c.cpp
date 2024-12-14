#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,string>;

int main() {
    vector<int> ten(5);
    cin >> ten[0] >> ten[1] >> ten[2] >> ten[3] >> ten[4];
    vector<int> koho(5);
    rep(i,5) koho[i] = i;

    vector<P> ans;
    
    for (int x=0; x < (1<<5); x++) {
        vector<int> toita;
        rep(nx,5) if (x>>nx&1) toita.push_back(nx);
        string ans2;
        int cnt = 0;
        rep(i,toita.size()) {
            if (toita[i] == 0) ans2 += "A";
            if (toita[i] == 1) ans2 += "B";
            if (toita[i] == 2) ans2 += "C";
            if (toita[i] == 3) ans2 += "D";
            if (toita[i] == 4) ans2 += "E";
            cnt -= ten[toita[i]];
        }
        ans.emplace_back(cnt,ans2);
    }

    sort(ans.begin(), ans.end());

    rep(i, ans.size()) cout << ans[i].second << endl;
return 0;
}