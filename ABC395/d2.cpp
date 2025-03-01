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
    vector<int> cnt(n);
    rep(i,n) cnt[i] = i;

    rep(nq,q) {
        int x;
        cin >> x;
        if (x == 1) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            nest[bird[cnt[a]]].erase(cnt[a]);
            bird[cnt[a]] = cnt[b];
            nest[cnt[b]].insert(cnt[a]);
        }
        if (x == 2) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            swap(cnt[a], cnt[b]);
        }
        if (x == 3) {
            int a;
            cin >> a;
            a--;
            cout << bird[cnt[a]]+1 << endl;
        }
    }

return 0;
}