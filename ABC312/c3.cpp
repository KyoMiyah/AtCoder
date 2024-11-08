#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int no = 0, yes = 1e9;
    while (no+1 < yes) {
        int x = (no + yes)/2;
        int na = 0, nb = 0;
        rep(i,n) if (a[i] <= x) na++;
        rep(i,m) if (b[i] >= x) nb++;
        if (na >= nb) yes = x;
        else no = x;
    }

    cout << yes << endl;
return 0;
}