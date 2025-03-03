#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> ab(n);
    vector<vector<int>> abv(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        ab[a].insert(b);
        ab[b].insert(a);
        abv[a].push_back(b);
        abv[b].push_back(a);
    }

    int ans = 0;
    rep(i,n) {
        if (abv[i].size() == 1 || abv[i].size() == 0) continue;
        rep(j,abv[i].size()) rep(k,j) {
            if (ab[abv[i][j]].count(abv[i][k]) == 0) ans++; 
        }
    }

    cout << ans << endl;
return 0;
}