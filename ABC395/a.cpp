#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    bool ok = true;
    rep(i,n-1) if (a[i+1] <= a[i]) ok = false;
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}