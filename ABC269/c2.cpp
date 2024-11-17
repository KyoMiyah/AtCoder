#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    string s;
    vector<int> keta;
    while(n != 0) {
        s += to_string(n%2);
        n /= 2;
    }
    int nn = s.size();

    rep(i,nn) if (s[i] == '1') keta.push_back(i);
    int tot = keta.size();
    vector<ll> ans3;

    for (int x=0; x < (1<<tot); x++) {
        vector<int> koho;
        rep(nx,tot) {
        if (x>>nx&1) koho.push_back(keta[nx]);
        }
        ll ans2 = 0;
        rep(i,koho.size()) {
            ll n2 = 1;
            rep(j,koho[i]) n2 *= 2;
            ans2 += n2;
        }
        ans3.push_back(ans2);
    }
    sort(ans3.begin(), ans3.end());
    rep(i,ans3.size()) cout << ans3[i] << endl;


return 0;
}