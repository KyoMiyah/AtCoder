#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        uf.merge(a,b);
    }
    set<int> x;
    rep(i,n) {
        int lead = uf.leader(i);
        x.insert(lead);
    }

    cout << x.size() << endl;
return 0;
}