#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<P> p(n);
    rep(i,n) {
        int a, b, c;
        cin >> a >> b >> c;
        p[i].first = a+b+c;
        p[i].second = i;
    }

    vector<bool> ans(n);
    sort(p.rbegin(), p.rend());

    rep(i,k) {
        ans[p[i].second] = true;
    }

    for (int i=k; i<n; i++) {
        if (p[i].first+300 >= p[k-1].first) ans[p[i].second] = true;
    }

    rep(i,n) {
        if (ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

return 0;
}