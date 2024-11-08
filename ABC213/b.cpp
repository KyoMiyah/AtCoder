#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int max1 = 0;
    rep(i,n) {
        max1 = max(max1,a[i]);
    }
    int max2 = 0;
    rep(i,n) {
        if (a[i] == max1) continue;
        max2 = max(max2,a[i]);
    }
    rep(i,n) if (a[i] == max2) cout << i+1 << endl;
return 0;
}