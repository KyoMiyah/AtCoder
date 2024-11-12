#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

bool deg(int ax, int ay, int bx, int by, int cx, int cy) {
    int bax = bx-ax, bay = by-ay, bcx = bx-cx, bcy = by-cy;
    bool ans = bax*bcx + bay*bcy == 0 && bax*bax+bay*bay == bcx*bcx+bcy*bcy;
    return ans;
}

int main() {
    vector<string> s(9);
    rep(i,9) cin >> s[i];
    int ans = 0;

    rep(ai,9) rep(aj,9) rep(bi,9) rep(bj,9) rep(ci,9) rep(cj,9) rep(di,9) rep(dj,9) {
        if (s[ai][aj] != '#' || s[bi][bj] != '#' || s[ci][cj] != '#' || s[di][dj] != '#') continue;
        if ((ai == bi && aj == bj) || (ai == ci && aj == cj) || (ai == di && aj == dj) || (bi == ci && bj == cj) || (bi == di && bj == dj) || (ci == di && cj == dj)) continue;
        int cnt = 0;

        if (deg(ci,cj,ai,aj,bi,bj)) cnt++;
        if (deg(di,dj,ai,aj,bi,bj)) cnt++;
        if (deg(ci,cj,ai,aj,di,dj)) cnt++;

        if (deg(ai,aj,bi,bj,ci,cj)) cnt++;
        if (deg(ai,aj,bi,bj,di,dj)) cnt++;
        if (deg(ci,cj,bi,bj,di,dj)) cnt++;

        if (deg(ai,aj,ci,cj,bi,bj)) cnt++;
        if (deg(ai,aj,ci,cj,di,dj)) cnt++;
        if (deg(di,dj,ci,cj,bi,bj)) cnt++; 

        if (deg(ai,aj,di,dj,bi,bj)) cnt++;
        if (deg(ai,aj,di,dj,ci,cj)) cnt++;
        if (deg(ci,cj,di,dj,bi,bj)) cnt++; 

        if (cnt == 4) ans++;
    }

    cout << ans/24 << endl;
return 0;
}