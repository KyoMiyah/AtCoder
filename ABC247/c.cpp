#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(16);
    a[0].push_back({1});
    for (int i=1; i<16; i++) {
        rep(j,a[i-1].size()) a[i].push_back(a[i-1][j]);
        a[i].push_back({i+1});
        rep(j,a[i-1].size()) a[i].push_back(a[i-1][j]);
    }

    rep(i,a[n-1].size()) cout << a[n-1][i] << ' ';
    cout << endl;
return 0;
}