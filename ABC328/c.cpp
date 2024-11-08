#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> start;
    rep(i,n-1) {
        if (s[i] == s[i+1]) start.push_back(i);
    }

    rep(i,q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        int ans = 0;
        rep(j,start.size()) {
            if (l <= start[j] && start[j] < r) ans++;
        }
        cout << ans << endl;
    }

return 0;
}