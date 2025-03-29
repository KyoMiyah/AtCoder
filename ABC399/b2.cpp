#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> ans(100);
    vector<int> p(n), cp(n);
    rep(i,n) {
        cin >> p[i];
        p[i]--;
    }
    cp = p;
    sort(p.rbegin(), p.rend());
    int s = 1;
    ans[p[0]] = s;
    vector<int> cnt(100);
    cnt[p[0]]++;
    for (int i=1; i<n; i++) {
        cnt[p[i]]++;
        if (p[i] != p[i-1]) {
            s += cnt[p[i-1]];
            ans[p[i]] = s;
        }
    }
    rep(i,n) cout << ans[cp[i]] << endl;
return 0;
}