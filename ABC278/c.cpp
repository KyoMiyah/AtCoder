#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<bool>> fol(n,vector<bool>(n));

    rep(i,q) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) fol[a-1][b-1] = true;
        if (t == 2) fol[a-1][b-1] = false;
        if (t == 3) {
            if (fol[a-1][b-1] && fol[b-1][a-1]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
return 0;
}