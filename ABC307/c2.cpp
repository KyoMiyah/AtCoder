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

    vector<string> c(30);
    rep(i,30) rep(j,30) c[i].push_back ('.');

    int cnt = 0;
    rep(i,ha) rep(j,wa) if (a[i][j] == '#') cnt++;
    rep(i,hb) rep(j,wb) if (b[i][j] == '#') cnt++;

    int cnt1 = 0;
    rep(i,hx) rep(j,wx) if (x[i][j] == '#') cnt1++;


    rep(i,ha) rep(j,wa) {
        if (a[i][j] == '.') continue;
        else c[i+10][j+10] = '#';
    }

    rep(si, 30-hb) rep(sj,30-wb){
        int cnt2 = cnt-cnt1;
        vector<string> cc = c;
        rep(i,hb) rep(j,wb) {
            if (b[i][j] == '#' && c[si+i][sj+j] == '#') cnt2--;
            if (b[i][j] == '.') continue;
            else cc[si+i][sj+j] = '#';
        }
        rep(sx,30-hx) rep(sy,30-wx) {
            bool ans = true;
            rep(i,hx) rep(j,wx) {
                if (x[i][j] != cc[sx+i][sy+j]) ans = false;
        }
        if (ans && cnt2 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    }
    cout << "No" << endl;
return 0;
}