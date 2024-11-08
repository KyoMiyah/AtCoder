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

    int no = 0, yes = 1e9+10;
    while (yes > no+1) {
        int mid = (no+yes)/2;
        ll tot = 0;
        rep(i,n) if (x[i].first >= mid) tot += x[i].second;
        if (tot <= k) yes = mid;
        else no = mid;
    }

    cout << yes << endl;
return 0;
}