#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    if (sy%2 == 0 && sx%2 == 1) sx--;
    if (sy%2 == 1 && sx%2 == 0) sx--;
    if (ty%2 == 0 && tx%2 == 1) tx--;
    if (ty%2 == 1 && tx%2 == 0) tx--;
    ll ans = 0;
    ans += abs(sy-ty);
    if (abs(sx-tx) > abs(sy-ty)) {
        ll rem = abs(sx-tx)-abs(sy-ty);
        ans += rem/2;
    }

    cout << ans << endl;

return 0;
}