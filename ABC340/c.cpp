#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a;
    a.push_back(n);

    ll ans = 0;

    while(1) {
        bool ok = true;
        rep(i,a.size()) if (a[i] > 1) ok = false;
        if (ok) break;

        rep(i,a.size()) if (a[i] > 1) {
            ans += a[i];
            ll t = a[i];
            a.erase(a.begin+i);
            a.push_back(t/2);
            if(a[i]%2 == 0) a.push_back(t/2);
            else a.push_back(t/2+1);
        } 
    }

    cout << ans << endl;
return 0;
}