#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<long double, int>;

int main() {
    int n;
    cin >> n;
    vector<P> c(n);

    rep(i,n) {
        long double a, b;
        cin >> a >> b;
        long double per = -1*1e9*a/(a+b);
        c.emplace_back(per, i+1);
    }
    sort(c.begin(), c.end());
    rep(i,n) cout << c[i].second << ' ';
    cout << endl;
return 0;
}