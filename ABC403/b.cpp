#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string t, u;
    cin >> t >> u;
    rep(i1,26) rep(i2,26) rep(i3,26) rep(i4,26) {
        string tt;
        int cnt = 0;
        rep(i,t.size()) {
            if (t[i] != '?') tt += t[i];
            else {
                if (cnt == 0) tt += 'a'+ i1;
                if (cnt == 1) tt += 'a'+ i2;
                if (cnt == 2) tt += 'a'+ i3;
                if (cnt == 3) tt += 'a'+ i4;
                cnt++;
            }
        }
        int ni = t.size() - u.size() + 1;
        rep(si,ni) {
            bool ok = true;
            rep(i,u.size()) {
                if (tt[si+i] != u[i]) ok = false;
            }
            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    } 
    cout << "No" << endl;
return 0;
}