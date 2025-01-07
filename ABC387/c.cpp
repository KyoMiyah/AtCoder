#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll l, r;
    cin >> l >> r;
    string sl = to_string(l);
    string sr = to_string(r);
    int nl = sl.size();
    int nr = sr.size();

    bool ok1 = true, ok2 = true;
    vector<ll> keta(18);
    for (int i=2; i<=17; i++) {
        ll cnt = 0;
        for (int j=1; j<=9; j++) {
            ll cnt2 = 1;
            rep(k,i-1) cnt2 *= j;
            cnt += cnt2;
        }
        keta[i] = cnt;
    }

    //for (int i=0; i<sl.size(); i++) if (sl[i] >= sl[0] && sl[0] != '9') {
      //  sl[i-1] += 1;
    //}

    cout << keta[17] << endl;
return 0;
}