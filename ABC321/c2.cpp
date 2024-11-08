#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int k;
    cin >> k;
    vector<int> can = {0,1,2,3,4,5,6,7,8,9};
    vector<ll> ans;

    rep(s,1<<10) {
        ll x = 0;
        for (int i=9; i>=0; i--) {
            if (s>>i&1) x = x*10 + i;
        }
        ans.push_back(x);
    }

    sort(ans.begin(),ans.end());
    cout << ans[k+1] << endl;

return 0;
}