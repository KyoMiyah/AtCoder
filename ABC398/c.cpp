#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i,n) {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.rbegin(), a.rend());
    map<int,int> to;
    rep(i,n) to[a[i].first]++;
    rep(i,n) if (to[a[i].first] == 1) {
        cout << a[i].second << endl;
        return 0;
    }

    cout << -1 << endl;

return 0;
}