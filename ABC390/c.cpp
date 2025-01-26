#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int imin = h, imax = -1, jmin = w, jmax = -1;

    rep(i,h) rep(j,w) if (s[i][j] == '#') {
        imin = min(imin, i);
        imax = max(imax, i);
        jmin = min(jmin, j);
        jmax = max(jmax, j);
    }

    for (int i=imin; i<=imax; i++) for (int j=jmin; j<=jmax; j++) {
        if (s[i][j] == '.') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
return 0;
}