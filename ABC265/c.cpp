#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    rep(i,h) cin >> g[i];

    vector<vector<bool>> done(h, vector<bool> (w));
    int i = 0, j = 0;
    while(1) {
        if (done[i][j]) {
            cout << -1 << endl;
            return 0;
        }
        done[i][j] = true;
        if (g[i][j] == 'U') {
            if (i-1 < 0) break;
            i--;
        }
        if (g[i][j] == 'D') {
            if (i+1 >= h) break;
            i++;
        }
        if (g[i][j] == 'L') {
            if (j-1 < 0) break;
            j--;
        }
        if (g[i][j] == 'R') {
            if (j+1 >= w) break;
            j++;
        }
    }
    cout << i+1 << ' ' << j+1 << endl;
return 0;
}