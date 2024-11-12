#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<string> s(9);
    rep(i,9) cin >> s[i];
    int ans = 0;

    rep(ai,9) rep(aj,9) rep(bi,9) rep(bj,9) rep(ci,9) rep(cj,9) rep(di,9) rep(dj,9) {
        if (s[ai][aj] != '#' || s[bi][bj] != '#' || s[ci][cj] != '#' || s[di][dj] != '#') continue;
        if ((ai == bi && aj == bj) || (ai == ci && aj == cj) || (ai == di && aj == dj) || (bi == ci && bj == cj) || (bi == di && bj == dj) || (ci == di && cj == dj)) continue;
        set<P> cnt;
        int xab = abs(ai-bi), yab = abs(aj-bj);
        int ab1 = min(xab,yab), ab2 = max(xab,yab);
        cnt.emplace(ab1,ab2);

        int xac = abs(ai-ci), yac = abs(aj-cj);
        int ac1 = min(xac,yac), ac2 = max(xac,yac);
        cnt.emplace(ac1,ac2);

        int xad = abs(ai-di), yad = abs(aj-dj);
        int ad1 = min(xad,yad), ad2 = max(xad,yad);
        cnt.emplace(ad1,ad2);

        int xbc = abs(bi-ci), ybc = abs(bj-cj);
        int bc1 = min(xbc,ybc), bc2 = max(xbc,ybc);
        cnt.emplace(bc1,bc2);

        int xbd = abs(bi-di), ybd = abs(bj-dj);
        int bd1 = min(xbd,ybd), bd2 = max(xbd,ybd);
        cnt.emplace(bd1,bd2);

        int xcd = abs(ci-di), ycd = abs(cj-dj);
        int cd1 = min(xcd,ycd), cd2 = max(xcd,ycd);
        cnt.emplace(cd1,cd2);

        if (cnt.size() == 3) ans++;
    }

    cout << ans << endl;
return 0;
}