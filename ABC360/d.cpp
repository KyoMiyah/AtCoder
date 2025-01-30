#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<ll> left, right;
    rep(i,n) {
        int x;
        cin >> x;
        if (s[i] == '1') right.push_back(x);
        else left.push_back(x);
    }

    ll ans = 0;
    sort(right.begin(), right.end());
    sort(left.begin(), left.end());

    for (ll r : right) {
        ll li = lower_bound(left.begin(), left.end(), r) - left.begin();
        ll ri = lower_bound(left.begin(), left.end(), r+2*t+1) - left.begin();
        ans += ri - li;
    }

    cout << ans << endl;
return 0;
}