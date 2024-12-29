#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> cnt(14);
    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;

    vector<int> ans(4);
    rep(i,14) {
        if (cnt[i] == 1) ans[1]++;
        if (cnt[i] == 2) ans[2]++;
        if (cnt[i] == 3) ans[3]++;
    }

    bool ok = false;
    if ((ans[1] == 1 && ans[3] == 1) || ans[2] == 2) ok = true;
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}