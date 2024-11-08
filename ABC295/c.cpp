#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    int i = 0, j = 0;
    int ans = 0;
    while (i<n && j<n) {
        if (i==j) j++;
        if (a[i] == a[j]) {
            j++; i=j;
            ans++;
        }
        else i++;
    };

    cout << ans << endl;
return 0;
}