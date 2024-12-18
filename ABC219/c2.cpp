#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<string,string>;

int main() {
    string x; int n;
    cin >> x >> n;
    vector<P> name(n);
    rep(i,n) cin >> name[i].second;
    string ABC = "abcdefghijklmnopqrstuvwxyz";

    rep(i,n) {
        rep(j,name[i].second.size()) {
            rep(k,26) {
                if (name[i].second[j] == x[k]) name[i].first += ABC[k];
            }
        }
    }

    sort(name.begin(), name.end());

    cout << endl;
    rep(i,n) cout << name[i].second << endl;
return 0;
}