#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
        a[i]--;
    }

    vector<int> siz1(n), siz2(n);
    siz1[a[0]]++;
    rep(i,n-1) siz2[a[i+1]]++;

    set<int> b1, b2;
    b1.insert(a[0]);
    rep(i,n-1) b2.insert(a[i+1]);

    int ans = b1.size() + b2.size();

    for (int i=1; i<n; i++) {
        b1.insert(a[i]);
        if (siz2[a[i]] == 1) b2.erase(a[i]);
        else siz2[a[i]]--;
        ans = max(ans, int(b1.size() + b2.size()));
    }

    cout << ans << endl;

return 0;
}