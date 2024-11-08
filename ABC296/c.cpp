#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    set<int> b;
    rep(i,n) b.insert(a[i]);

    rep(j,n) {
        int ans = x + a[j];
        if (b.count(ans)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
return 0;
}