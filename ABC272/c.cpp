#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    if (n == 2 && ((a[0]%2 == 0 && a[1]%2 == 1) || (a[0]%2 == 1 && a[1]%2 == 0))) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> odd, eve;
    rep(i,n) {
        if (a[i]%2 == 1) odd.push_back(a[i]);
        else eve.push_back(a[i]);
    }
    int oddmax = 0, evemax = 0;
    sort(odd.rbegin(),odd.rend());
    sort(eve.rbegin(),eve.rend());
    if (odd.size() >= 2) oddmax = odd[0] + odd[1];
    if (eve.size() >= 2) evemax = eve[0] + eve[1];

    cout << max(oddmax, evemax) << endl;
return 0;
}