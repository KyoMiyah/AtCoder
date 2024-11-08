#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> a(n);
    rep(i,m) {
        int x;
        cin >> x;
        x--;
        a[x] = true;
    }

    vector<int> ans;
    int x = 0;
    for (int i=n-1; i>=0; i--) {
        if (a[i]) x = 0;
        else x++;
        ans.push_back(x);
    }

    reverse(ans.begin(),ans.end());

    rep(i,n) cout << ans[i] << endl;
    
return 0;
}