#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<P> p(n);
    vector<int> cnt(101);
    rep(i,101) cnt[i] = 1;
    rep(i,n) cin >> p[i].first;
    sort(p.rbegin(), p.rend());
    int s = 1;
    p[0].second = 1;
    for (int i=1; i<n; i++) {
        if (p[i].first != p[i-1].first) {
            s += cnt[p[i-1].first];
            p[i].second = s;
            cnt[p[i].first]++;
        }
        else {
            cnt[p[i].first]++;
            p[i].second = s;
        }
    }

    rep(i,n) cout << p[i].second << endl;
return 0;
}