#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> bird(n);
    rep(i,n) bird[i] = i;
    vector<set<int>> nest(n);
    rep(i,n) nest[i].insert(i);

    rep(nq,q) {
        int x;
        cin >> x;
        if (x == 1) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            nest[bird[a]].erase(a);
            bird[a] = b;
            nest[b].insert(a);
        }
        if (x == 2) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            for (auto c : nest[a]) bird[c] = b;
            for (auto c : nest[b]) bird[c] = a;
            set<int> aa = nest[a];
            nest[a] = nest[b];
            nest[b] = aa;
        }
        if (x == 3) {
            int a;
            cin >> a;
            a--;
            cout << bird[a]+1 << endl;
        }
    }

return 0;
}