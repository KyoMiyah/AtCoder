#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i,n) {
        cin >> p[i];
        p[i]--;
    }
    vector<P> a(n);
    rep(i,n) a[i].second = p[i];
    rep(i,n) a[i].first = p[a[i].second];

    sort(a.begin(), a.end());

    set<int> s;
    rep(i,k) s.insert(a[i].second);
    int ans = *s.rbegin() - *s.begin();

    rep(i,n-k) {
        s.insert(a[i+k].second);
        s.erase(a[i].second);
        ans = min(ans,*s.rbegin() - *s.begin());
    }

    cout << ans << endl;
return 0;
}