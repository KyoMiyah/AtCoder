#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int si = 0, sj = 0, gi = 0, gj = 0;
    rep(i,h) rep(j,w) {
        if (s[i][j] == 'S') {
        si = i;
        sj = j;
        }
        if (s[i][j] == 'G') {
        gi = i;
        gj = j;
        }
    }

    
return 0;
}