#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;
    vector<int> cnt0;
    int cnt = 0;
    rep(i,n) {
        if (s[i] == '1') cnt0.push_back(cnt);
        else cnt++;
    }

    ll ans = 0;
    if (cnt0.size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    rep(i,cnt0.size()-1) {
        ans += abs(cnt0[i+1] - cnt0[0]);
    }

    ll ans2 = ans;
    int nn = cnt0.size();
    rep(i,nn-1) {
        ans2 += i * (cnt0[i+1]-cnt0[i]);
        ans2 -= (nn - i - 2) * (cnt0[i+1]-cnt0[i]);
        ans = min(ans, ans2);
    }

    cout << ans << endl;
return 0;
}