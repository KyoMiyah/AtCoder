#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    string ans;
    int i = 0;
    rep(nq,q) {
        int x;
        cin >> x;
        if (x == 1) {
            string a;
            cin >> a;
            ans += a;
        }
        else {
            cout << ans[i] << endl;
            i++;
        }
    }
return 0;
}