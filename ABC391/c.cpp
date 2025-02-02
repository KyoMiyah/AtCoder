#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> cnt(n);
    rep(i,n) cnt[i] = 1;
    vector<int> where(n);
    rep(i,n) where[i] = i;

    int db = 0;
    rep(nq,q) {
        int i;
        cin >> i;
        if (i == 1) {
            int x, y;
            cin >> x >> y;
            x--; y--;
            if (cnt[where[x]] == 2) db--;
            cnt[where[x]]--;
            if (cnt[y] == 1) db++;
            cnt[y]++;
            where[x] = y;
        }
        if (i == 2) cout << db << endl;
    }
return 0;
}