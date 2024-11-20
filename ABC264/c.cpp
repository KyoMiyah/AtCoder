#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1,vector<int>(w1));
    rep(i,h1) rep(j,w1) cin >> a[i][j];

    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2,vector<int>(w2));
    rep(i,h2) rep(j,w2) cin >> b[i][j];
    
    for (int x=0; x < (1<<h1); x++) {
        for (int y=0; y < (1<<w1); y++) {
            vector<int> tate;
            vector<int> yoko;
        rep(nx,h1) {
        if (x>>nx&1) tate.push_back(nx);
        }
        rep(ny,w1) {
        if (y>>ny&1) yoko.push_back(ny);
        }
        vector<vector<int>> ans(tate.size(), vector<int>(yoko.size()));
        rep(i,tate.size()) rep(j,yoko.size()) {
            ans[i][j] = a[tate[i]][yoko[j]];
        }
        if (tate.size() != h2 || yoko.size() != w2) continue;
        bool hantei = true;
        rep(i,tate.size()) rep(j,yoko.size()) {
            if (ans[i][j] != b[i][j]) hantei = false;
        }
        if (hantei) {
            cout << "Yes" << endl;
            return 0;
        }       
     }
    }
    cout << "No" << endl;

return 0;
}