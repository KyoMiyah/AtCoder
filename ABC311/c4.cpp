#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];
    vector<int> b(n+1);

    int now = 1;
    int k = 1;
    while (b[now] == 0) {
        b[now] = k; k++;
        now = a[now];
    }

    vector<int> ans;
    int len = k-b[now];
    rep(i,len) {
        ans.push_back(now);
        now = a[now];
    }

    cout << ans.size() << endl;
    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
return 0;
}