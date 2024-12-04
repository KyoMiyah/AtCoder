#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> a(n,vector<bool>(n));
    vector<vector<bool>> b(n,vector<bool>(n));

    rep(i,m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        a[x][y] = true;
        a[y][x] = true;
    }
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        b[x][y] = true;
        b[y][x] = true;
    }

    vector<int> cnt(n), cnt2(n);
    rep(i,n) cnt[i] = i;

    do{
        bool ok = true;
        rep(i,n) rep(j,n) {
            if (a[cnt[i]][cnt[j]] != b[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(cnt.begin(),cnt.end()));

    cout << "No" << endl;
return 0;
}