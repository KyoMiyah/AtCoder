#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> box(n+1);
    vector<set<int>> card(1e6);

    rep(x,q) {
        int a, i, j;
        cin >> a;
        if (a == 1) {
            cin >> i >> j;
            box[j].push_back(i);
            card[i].insert(j);
        }
        if (a == 2) {
            cin >> i;
            sort(box[i].begin(), box[i].end());
            rep(ni,box[i].size()) cout << box[i][ni] << ' ';
            cout << endl;
        }
        if (a == 3) {
            cin >> j;
            for (int nj : card[j]) cout << nj << ' ';
            cout << endl;
        }
    }
return 0;
}