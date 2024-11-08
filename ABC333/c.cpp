#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a;
    string b;
    rep(i,12) {
        b += '1';
        a.push_back(stoll(b));
    }

    set<ll> ans;
    rep(i,12) rep(j,12) rep(k,12) {
        ans.insert(a[i]+a[j]+a[k]);
    }

    int ns = 1;
    for (ll x : ans) {
        if (ns == n) cout << x << endl;
        ns++;
    }
return 0;
}