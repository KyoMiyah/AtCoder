#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    for (int rogo=0; rogo<=n; rogo++) {
        bool ans = true;
        int rogo2 = rogo, mm = m;
        rep(i,n) {
            if (s[i] == '0') {
                rogo2 = rogo;
                mm = m;
            }
            if (s[i] == '2') rogo2--;
            if (s[i] == '1') {
                if (mm == 0) rogo2--;
                else mm--;
            }
        if (mm < 0 || rogo2 < 0) ans = false;
        }
        if (ans) {
            cout << rogo << endl;
            return 0;
        }
    }
return 0;
}