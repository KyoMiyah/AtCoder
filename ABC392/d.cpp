#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i,n) {
        int k;
        cin >> k;
        rep(j,k) {
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }
    
    double ans = 0;
    rep(i1,n) rep(i2,i1) {
        double cnt = 0, same = 0;
        for (auto a1 : a[i1]) for (auto a2 : a[i2]) {
            if (a1 == a2) same++;
            cnt++;
        }
        double ans1 = same/cnt;
        ans = max(ans, ans1);
    }

    printf("%.9f\n", ans);
return 0;
}