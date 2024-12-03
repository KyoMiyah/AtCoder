#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    map<int,vector<int>> to;
    rep(i,n) {
        int a;
        cin >> a;
        to[a].push_back(i+1);
    }
    rep(i,q) {
        int x, k;
        cin >> x >> k;
        if (to[x].size() < k) cout << -1 << endl;
        else cout << to[x][k-1] << endl;
    }

return 0;
}