#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w, q;
    cin >> h >> w >> q;
    vector<vector<bool>> a(h,vector<bool> (w));

    rep(i,q) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        if (!a[r][c]) {
            a[r][c] = true;
            continue;
        }
        int v1 = 1, v2 = -1, v3 = 1, v4 = -1;
        while (v1+r < h && 0 <= v1+r) {
            if (!a[v1+r][c]) {
                a[v1+r][c] = true;
                break;
            }
            v1++;
        }
        while (v2+r < h && 0 <= v2+r) {
            if (!a[v2+r][c]) {
                a[v2+r][c] = true;
                break;
            }
            v2--;
        }

        while (v3+c < w && 0 <= v3+c) {
            if (!a[r][v3+c]) {
                a[r][v3+c] = true;
                break;
            }
            v3++;
        }
        while (v4+c < w && 0 <= v4+c) {
            if (!a[r][v4+c]) {
                a[r][v4+c] = true;
                break;
            }
            v4--;
        }
    }

    int cnt = 0;
    rep(i,h) rep(j,w) if (!a[i][j]) cnt++;
    cout << cnt << endl;
return 0;
}