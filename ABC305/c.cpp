#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<int> yoko(h);
    vector<int> tate(w);

    int yokomin = 501, tatemin = 501;
    rep(i,h) {
        rep(j,w) if (s[i][j] == '#') yoko[i]++;
    }
    rep(j,w) {
        rep(i,h) if (s[i][j] == '#') tate[j]++;
    }

    rep(i,h) {
        if (yoko[i] == 0) continue;
        else yokomin = min(yokomin,yoko[i]);
    }
    rep(i,w) {
        if (tate[i] == 0) continue;
        else tatemin = min(tatemin,tate[i]);
    }
    rep(i,h) if (yoko[i] == yokomin) cout << i+1 << ' ';
    rep(i,w) if (tate[i] == tatemin) cout << i+1 << endl;
return 0;
}