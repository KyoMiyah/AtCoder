#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];

    for (int i=1; i<=n; i++) {
        vector<int> ans;
        int now = i;
        int cnt = 0;
        bool ok = false;
        while (cnt != n) {
            cnt++;
            ans.push_back(now);
            now = a[now];
            if (now == i) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << ans.size() << endl;
            rep(j,ans.size()) cout << ans[j] << ' ';
            cout << endl;
            return 0;
        }
    }
return 0;
}