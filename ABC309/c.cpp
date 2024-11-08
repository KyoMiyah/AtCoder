#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<P> x(n);
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        x[i].first = a;
        x[i].second = b;
    }
    sort(x.begin(), x.end());

    ll tot = 0;
    int j = 0;
    rep(i,n) tot += x[i].second;
    rep(i,n) {
        if (tot <= k) {
            cout << i+1 << endl;
            return 0;
        }
        while (x[j].first <= i+2) {
            tot -= x[j].second;
            j++;
        }
    }
return 0;
}