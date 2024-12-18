#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<string,int>;

int main() {
    string x; int n;
    cin >> x >> n;
    vector<P> name(n);
    rep(i,n) name[i].second = i;
    rep(i,n) cin >> name[i].first;
    string ABC = "abcdefghijklmnopqrstuvwxyz";

    vector<P> ans(n);
    rep(i,n) ans[i].second = i;
    rep(i,n) {
        rep(j,name[i].first.size()) {
            rep(k,26) {
                if (name[i].first[j] == x[k]) ans[i].first += ABC[k];
            }
        }
    }

    sort(ans.begin(), ans.end());
    vector<string> ans2(n);

    rep(i,n) {
        rep(j,n) {
            if (ans[i].second == name[j].second) ans2[i] = name[j].first;
        }
    }
    cout << endl;
    rep(i,n) cout << ans2[i] << endl;
return 0;
}