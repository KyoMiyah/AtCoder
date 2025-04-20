#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<int> ans;
    rep(nq,q) {
        int x;
        cin >> x;
        if (x == 1) {
            int a;
            cin >> a;
            ans.push_back(a);
        }
        else {
            cout << ans[0] << endl;
            ans.erase(ans.begin());
        }
    }
return 0;
}