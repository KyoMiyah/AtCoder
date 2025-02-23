#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, string>;

int main() {
    int n;
    cin >> n;
    vector<P> p(n);
    rep(i,n) {
        string s;
        cin >> s;
        p[i] = {s.size(), s};
    }

    sort(p.begin(), p.end());
    string ans;
    rep(i,n) ans += p[i].second;
    cout << ans << endl;
return 0;
}