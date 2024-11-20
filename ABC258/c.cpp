#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int nx = 0;
    rep(i,q) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            nx += x;
            nx %= n;
        }
        if (t == 2) {
            cout << s[(x-nx-1+n)%n] << endl;
        }
    }
return 0;
}