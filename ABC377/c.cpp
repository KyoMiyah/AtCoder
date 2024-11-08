#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    set<P> x;
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        if ((a-2)>0 && (a-2)<=n && (b-1)>0 && (b-1)<=n) x.emplace(a-2,b-1);
        if ((a-1)>0 && (a-1)<=n && (b-2)>0 && (b-2)<=n) x.emplace(a-1,b-2);
        if ((a+1)>0 && (a+1)<=n && (b-2)>0 && (b-2)<=n) x.emplace(a+1,b-2);
        if ((a+2)>0 && (a+2)<=n && (b-1)>0 && (b-1)<=n) x.emplace(a+2,b-1);
        if ((a+2)>0 && (a+2)<=n && (b+1)>0 && (b+1)<=n) x.emplace(a+2,b+1);
        if ((a+1)>0 && (a+1)<=n && (b+2)>0 && (b+2)<=n) x.emplace(a+1,b+2);
        if ((a-1)>0 && (a-1)<=n && (b+2)>0 && (b+2)<=n) x.emplace(a-1,b+2);
        if ((a-2)>0 && (a-2)<=n && (b+1)>0 && (b+1)<=n) x.emplace(a-2,b+1);
        x.emplace(a,b);
    }
    ll nn = (ll)n*n;
    ll ans = nn - x.size();
    cout << ans << endl;
return 0;
}