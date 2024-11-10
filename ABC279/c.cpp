#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];

    rep(i,h) {
        int ns = 0, nt = 0;
        rep(j,w) {
            if (s[i][j] == '#') ns++;
            if (t[i][j] == '#') nt++;
        }
        if (ns != nt) {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> a(w);
    rep(sj,w) {
        rep(tj,w) {
            if (a[tj]) continue;
            bool ok = true;
            rep(i,h) {
                if (s[i][sj] != t[i][tj]) ok = false;
                if (!ok) break;
            }
            if (ok) {
                a[tj] = true;
                break;
            }
        }
    }
    rep(i,w) if (!a[i]) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
return 0;
}