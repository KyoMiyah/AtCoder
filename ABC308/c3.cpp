#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];

    vector<int> p(n);
    rep(i,n) p[i] = i;
    stable_sort(p.begin(), p.end(), [&] (int i, int j) {
        return (ll)a[i]*(a[j]+b[j]) > (ll)a[j]*(a[i]+b[i]);
    });
    rep(i,n) cout << p[i]+1 << ' ';
    cout << endl;
return 0;
}