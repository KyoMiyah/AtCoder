#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n), b(n);
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        b[x].push_back(y);
        b[y].push_back(x);
    }

    vector<int> cnt(n), cnt2(n);
    rep(i,n) {
        cnt[i] = i;
        cnt2[i] = i;
    }
    do{
        bool ok = true;
        rep(i,n) {
            if (a[cnt[i]].size() != b[cnt2[i]].size()) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(cnt.begin(),cnt.end()));

    cout << "No" << endl;
return 0;
}