#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> aa(n);
    rep(i,n-1) aa[i+1] = aa[i] + a[n-1-i];
    reverse(aa.begin(), aa.end());
    
    mint ans = 0;
    rep(i,n-1) {
        ll a1 = a[i]*(n-1-i);
        int keta = 1;
        int a2 = a[i];
        while (a2>0) {
            keta *= 10;
            a2 /= 10;
        }
        a1 *= keta;
        ans += (a1+a2);
    }

    cout << ans.val() << endl;
return 0;
}