#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int ha, wa;
    cin >> ha >> wa;
    vector<string> a(ha);
    rep(i,ha) cin >> a[i];

    int hb, wb;
    cin >> hb >> wb;
    vector<string> b(hb);
    rep(i,hb) cin >> b[i];

    int hx, wx;
    cin >> hx >> wx;
    vector<string> x(hx);
    rep(i,hx) cin >> x[i];

    vector<string> c(50);
    rep(i,50) rep(j,50) c[i].push_back ('.');

    int cnt = 0;
    rep(i,ha) rep(j,wa) if (a[ha][wa] == '#') cnt++;
    rep(i,hb) rep(j,wb) if (a[hb][wb] == '#') cnt++;

    int cnt2 = 0;
    rep(i,hx) rep(j,wx) if (a[hx][wx] == '#') cnt2++;

    rep(i,ha) rep(j,wa) {
        if (a[i][j] == '.') continue;
        else c[i+20][j+20] = '#';
    }

    rep(si, 50-hb) rep(sj,50-wb){
        vector<string> cc = c;
        rep(i,hb) rep(j,wb) {
        if (b[i][j] == '.') continue;
        if (b[i][j] == '#') cc[si+j][sj+j] = '#';
        if (b[i][j] == '#' && c[si+j][sj+j] == '#') cnt--;
        }
        rep(sx,50-hx) rep(sy,50-wx) {
            bool ans = true;
            rep(i,hx) rep(j,wx) {
                if (x[i][j] != cc[sx+i][sy+j]) ans = false;
        }
        if (ans && cnt2 == cnt) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    }
    cout << "No" << endl;
return 0;
}