#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;

int main() {
    vector<int> c(9);
    rep(i,9) cin >> c[i];
    vector<int> a = {0,1,2,3,4,5,6,7,8};

    int cnt = 0, tot = 0;
    do {
        tot++;
        bool ans = true;
        auto f = [&] (int x, int y, int z) {
            vector<P> d;
            d.emplace_back(a[x],c[x]);
            d.emplace_back(a[y],c[y]);
            d.emplace_back(a[z],c[z]);
            sort(d.begin(),d.end());
            if (d[0].second == d[1].second) ans = false;
        };
        f (0,1,2);
        f (3,4,5);
        f (6,7,8);
        f (0,3,6);
        f (1,4,7);
        f (2,5,8);
        f (0,4,8);
        f (2,4,6);
        if (ans) cnt++;
    } while (next_permutation(a.begin(),a.end()));

    double ans2 = 1.*cnt/tot;

    printf("%.10f",ans2);

return 0;
}