#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<P> lr(n);
    rep(i,n) {
        cin >> lr[i].first >> lr[i].second;
    }

    sort(lr.begin(), lr.end());
    ll ans = 0;
    rep(i,n-1) {
        int r = lr[i].second;
        int yes = i, no = n;
        while (yes + 1 != no) {
            int mid = (yes+no)/2;
            if (lr[mid].first <= r) yes = mid;
            else no = mid;
        }
        ans += yes-i;
    }

    cout << ans << endl;
return 0;
}