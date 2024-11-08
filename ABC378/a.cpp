#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    vector<int> a(4);
    rep(i,4) {
        int x; cin >> x;
        x--;
        a[x]++;
    }
    int ans = 0;
    rep(i,4) {
        if (a[i] == 4) ans += 2;
        if (a[i] == 3 || a[i] == 2) ans++;
    }

    cout << ans << endl;
return 0;
}