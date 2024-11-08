#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> a(n);
    rep(i,n) cin >> a[i].first;

    sort(a.begin(),a.end());

    int j = 0;
    rep(i,n) {
        while (j < n && a[j].first-a[i].first <= m-1) {
            j++;
        }
            a[i].second = j-i;
            j--;
    }

    int ans = 0;
    rep(i,n) ans = max(ans,a[i].second);
    cout << ans << endl;

return 0;
}