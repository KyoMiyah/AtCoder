#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(2*n);
    rep(i,n) cin >> p[i];

    vector<int> cnt(n);
    rep(i,n) {
        int j = (p[i]-i+n)%n;
        cnt[(j-1+n)%n]++;
        cnt[j]++;
        cnt[(j+1)%n]++;
    }
    int ans = 0;
    rep(i,n) ans = max(ans,cnt[i]);
    cout << ans << endl;
return 0;
}