// https://atcoder.github.io/ac-library/production/document_ja/dsu.html

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    int ans = 0;
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        if (uf.same(a,b)) ans++;
        else uf.merge(a,b);
    }
    cout << ans << endl;
return 0;
}


