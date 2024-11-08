#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<vector<int>> a (9,vector<int>(9));
    rep(i,9) rep(j,9) {
        cin >> a[i][j];
        a[i][j]--;
    }

    bool ans = true;
    vector<bool> hantei(9);
    rep(i,9) {
        vector<bool> hantei1 = hantei;
        vector<bool> hantei2 = hantei;
        rep(j,9) {
            hantei1[a[i][j]] = true;
            hantei2[a[j][i]] = true;
        }
        rep(j,9) if (!hantei1[j] || !hantei2[j]) ans = false;
    }

    for (int k=0; k<9; k+=3) for (int l=0; l<9; l+=3){
        vector<bool> hantei1 = hantei;
        rep(i,3) rep(j,3) {
            hantei1[a[i+k][j+l]] = true;
        }
        rep(i,9) if (!hantei1[i]) ans = false;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}