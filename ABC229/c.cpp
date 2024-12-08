#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll,ll>;

int main() {
    int n, w;
    cin >> n >> w;
    vector<P> ab(n);
    rep(i,n) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.rbegin(), ab.rend());

    vector<P> ab2(n);
    ab2[0].first = ab[0].first*ab[0].second;
    ab2[0].second = ab[0].second;
    for (int i=1; i<n; i++) {
        ab2[i].first = ab2[i-1].first+ab[i].first*ab[i].second;
        ab2[i].second = ab2[i-1].second+ab[i].second;
    }

    int keta = 0;
    if (ab2[n-1].second <= w) {
        cout << ab2[n-1].first << endl;
        return 0;
    }
    rep(i,n) if (ab2[i].second > w) {
        keta = i;
        break;
    }
    ll ans = ab2[keta-1].first;

    ll amari;
    if (keta == 0) amari = w;
    else amari = w-ab2[keta-1].second;

    ans += amari*ab[keta].first;

    cout << ans << endl;
return 0;
}