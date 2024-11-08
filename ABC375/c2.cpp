#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i,n) cin >> a[i];

    vector<string> aa = a;
    rep(i,n/2) {
        vector<int> b;
        for (int j=i+1; j<=n-i; j++) b.push_back(j);
        rep(x,b.size()) rep(y,b.size()) {
        aa[b[y]-1][n-b[x]] = a[b[x]-1][b[y]-1];
        }
        a = aa;
    }

    rep(i,n) cout << a[i] << endl;
return 0;
}