#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    vector<int> pp = p;
    vector<int> stock;
    bool ok = false;
    rep(i,n) {
        int v = pp.back();
        pp.pop_back();
        sort(stock.begin(), stock.end());
        stock.push_back(v);
        rep(j,stock.size()) {
            if (stock[j] < v) {
                rep(k,stock.size()) {
                    if (stock[k] > v) {
                        pp.push_back(stock[k-1]);
                        sort(stock.rbegin(), stock.rend());
                        rep(l,stock.size()) pp.push_back(stock[l]);
                        ok = true;
                    }
                }
            }
        }
        if (ok) break;
    }

    rep(i,n) cout << pp[i] << ' ';
    cout << endl;

return 0;
}