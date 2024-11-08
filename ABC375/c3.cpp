#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i,n) cin >> a[i];
    vector<string> aa = a;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        num %= 4;
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        aa[ni][nj] = a[i][j];
    }

    rep(i,n) cout << aa[i] << '\n';
return 0;
}