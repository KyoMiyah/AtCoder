#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;
using PP = pair<int,string>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> a(m);
    rep(i,m) {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<PP> s(n);
    rep(i,n) {
        cin >> s[i].second;
        rep(j,m) {
            if (s[i].second[j] == 'o') s[i].first += a[j].first;
        }
        s[i].first += i+1;
    }

    vector<P> aa = a;
    sort(aa.rbegin(),aa.rend());
    vector<PP> ss = s;
    sort(ss.rbegin(),ss.rend());

    rep(i,n) {
        int rem = ss[0].first - s[i].first;
        if (rem <= 0) cout << 0 << endl;
        else {
            int j = 0, ans = 0;
            while (j < m && rem > 0) {
                if (s[i].second[aa[j].second] == 'x') {
                    rem -= aa[j].first;
                    ans++;
                }
                j++;
            }
            cout << ans << endl;
        }
    }

return 0;
}