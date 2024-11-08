#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> tot(n);
    int x = 0;
    for (int i=1; i<n; i++) {
        if (s[i] == s[i-1]) x++;
        tot[i] = x;
    }

    rep(i,q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << tot[r] - tot[l] << endl;
    }

return 0;
}