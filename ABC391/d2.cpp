#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> x(n), y(n);
    rep(i,n) {
        cin >> x[i] >> y[i];
        x[i]--;
    }
    vector<int> idx(n);
    rep(i,n) idx[i] = i;
    sort(idx.begin(), idx.end(), [&](int i, int j) {
        return y[i] < y[j];
    });

    vector<int> r(n);
    vector<int> num(w);
    for (int i : idx) {
        r[i] = num[x[i]];
        num[x[i]] ++;
    }

    vector<int> d(n, 1e9+1);
    {
        vector<vector<int>> blocks(n);
        rep(i,n) blocks[r[i]].push_back(i);
        rep(i,n) {
            if (blocks[i].size() != w) continue;
            int mx = 0;
            for (int j : blocks[i]) mx = max(mx, y[j]-1);
            d[i] = mx+1;
        }
    }

    int q;
    cin >> q;
    rep(qi, q) {
        int t, a;
        cin >> t >> a;
        a--;
        if (d[r[a]] > t) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
return 0;
}