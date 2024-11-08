#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0; i<n; i++)

bool solve() {
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    vector<int> degree(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        degree[a]++;
        degree[b]++;
        uf.merge(a,b);
    }

    int one = 0;
    rep(i,n) {
        if (degree[i] == 0 || degree[i] > 2) return false;
        if (degree[i] == 1) one++;
    }
    if (one != 2) return false;
    if (uf.size(0) != n) return false;
    return true;
}
    

int main() {
    if (solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}