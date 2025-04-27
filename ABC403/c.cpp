#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    map<int,set<int>> to;
    set<int> ok;

    rep(nq,q) {
        int a;
        cin >> a;
        if (a == 1) {
            int x, y;
            cin >> x >> y;
            to[x].insert(y);
        }
        if (a == 2) {
            int x;
            cin >> x;
            ok.insert(x);
        }
        if (a == 3) {
            int x, y;
            cin >> x >> y;
            if (ok.count(x)) cout << "Yes" << endl;
            else {
                if (to[x].count(y)) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
return 0;
}