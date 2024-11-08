#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    rep(n,h) {
        int i = 0, j = 0;
        while(i<w && j<w) {
            if (s[n][i] == '.' && s[n][j] == '.') {
                i++; j++;
            }
            if (s[n][i] == 'T') {
                j++;
                if (s[n][j] == 'T') {
                    s[n][i] = 'P';
                    s[n][j] = 'C';
                }
                i = j;
                i++; j++;
            }
        }
    }

    rep(i,h) {
        rep(j,w) cout << s[i][j];
        cout << endl;
    }
return 0;
}