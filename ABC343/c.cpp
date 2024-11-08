#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;

    for (ll x=1e6; x>0; x--) {
        ll k = x*x*x;
        if (n < k) continue;
        string kk = to_string(k);
        string kkk = kk;
        reverse(kkk.begin(),kkk.end());
        if (kkk[0] == '0') continue;
        if (kk == kkk) {
            cout << kk << endl;
            return 0;
        }
    }
return 0;
}