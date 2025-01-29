#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(nq,q) {
        int b, k;
        cin >> b >> k;
        k--;
        vector<int> aa = a;
        rep(i,n) aa[i] = abs(b-a[i]);
        sort(aa.begin(), aa.end());
        cout << aa[k] << endl;
    }
return 0;
}