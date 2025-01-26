#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    rep(i,n) cin >> a[i];

    double r = a[1]/a[0];
    vector<double> aa(n);
    aa[0] = a[0];
    rep(i,n-1) aa[i+1] = aa[i]*r;

    if (aa == a) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}