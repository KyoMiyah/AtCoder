#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<P> w(n);
    rep(i,n) {
        cin >> w[i].first;
        w[i].second = i;
    }
    sort(w.begin(), w.end());
    int ans = 0;
    rep(i,n) if (s[i] == '1') ans++;
    int maxans = ans;
    for (int i=1; i<=n; i++) {
        if (s[w[i-1].second] == '1') ans--;
        else ans++;
        if (i<=n-1 && w[i-1].first == w[i].first) continue;
        maxans = max(maxans, ans);
    }

    cout << maxans << endl;
return 0;
}