#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> t(n);
    vector<int> k(n);
    vector<vector<int>> a(n);
    rep(i,n) {
        cin >> t[i] >> k[i];
        rep(j,k[i]) {
            int aa;
            cin >> aa;
            a[i].push_back(aa);
        }
    }

    vector<ll> time(n);
    rep(i,n) {
        rep(j,k[i]) time[i] += time[a[i][j]-1];
        time[i] += t[i];
    }

    cout << time[n-1] << endl;
return 0;
}