#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    int j = 0;
    rep(i,n) {
        while (a[i] <= b[j]) j++;
        if (j!=0 && i >= j-1) {
            cout << a[i] << endl;
            return 0;
        }
        if (i == n-1) {
            cout << b[0]+1 << endl;
            return 0;
        }
    }
return 0;
}