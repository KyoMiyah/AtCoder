#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int>p(2*n+2);

    for (int i=1; i<=n; i++) {
        int a;
        cin >> a;
        p[2*i] = a;
        p[2*i+1] = a;
    }

    vector<int>ans(2*n+2);
    for (int i=2; i<=2*n+1; i++) {
        ans[i] = ans[p[i]] + 1;
    }

    for (int i=1; i<=2*n+1; i++) {
        cout << ans[i] << endl;
    }
return 0;
}