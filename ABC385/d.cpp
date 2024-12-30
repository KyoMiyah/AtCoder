#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m; ll sx, sy;
    cin >> n >> m >> sx >> sy;

    using D = map<ll,set<ll>>;
    map<ll,set<ll>> xs, ys;

    rep(i,n) {
        int x, y;
        cin >> x >> y;
        xs[y].insert(x);
        ys[x].insert(y);
    }

    int ans = 0;
    auto f = [&] (D& xs, D& ys, ll y, ll l, ll r) {
        if (l > r) swap(l,r);
        auto& st = xs[y];
        while(1) {
            auto it = st.lower_bound(l);//返り値はイテレータ
            if (it == st.end()) break;
            if (*it > r) break;//*itで値を取れる
            ys[*it].erase(y);
            st.erase(it); 
            ans++;
        } 
    };

    rep(mi,m) {
        char d; ll c;
        cin >> d >> c;
        ll nx = sx, ny = sy;
        if (d == 'U') ny += c;
        if (d == 'D') ny -= c;
        if (d == 'R') nx += c;
        if (d == 'L') nx -= c;
        if (sy == ny) f(xs, ys, sy, sx, nx);
        else f(ys, xs, sx, sy, ny);
        sx = nx; sy = ny;
    }

    printf("%lld %lld %d\n", sx, sy, ans);
return 0;
}