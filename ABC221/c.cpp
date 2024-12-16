#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int>a;
    while (n > 0) {
        int b = n%10;
        a.push_back(b);
        n /= 10;
    }

    ll ans = 0;

    for (int x=0; x < (1<<a.size()); x++) {
        vector<int>b1, b2;
        rep(nx,a.size()) {
        if (x>>nx&1) b1.push_back(a[nx]);
        else b2.push_back(a[nx]);
        }
        if (b1.size() == 0 || b2.size() == 0) continue;
        sort(b1.begin(),b1.end());
        sort(b2.begin(),b2.end());
    do{
        if (b2.back() != 0) {
            do{
                ll can1 = 0, can2 = 0;
                if (b1.back() != 0) {
                    int keta1 = 1;
                    rep(i,b1.size()) {
                        can1 += b1[i]*keta1;
                        keta1 *= 10;
                    }
                    int keta2 = 1;
                    rep(i,b2.size()) {
                        can2 += b2[i]*keta2;
                        keta2 *= 10;
                    }
                }
                ll can = can1*can2;
                ans = max(ans,can);
        }while(next_permutation(b1.begin(),b1.end()));
    }}while(next_permutation(b2.begin(),b2.end()));
    }
    cout << ans << endl;
return 0;
}