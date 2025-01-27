#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

double dis(double x, double y) {
    return sqrt(x*x + y*y);
}

int main() {
    int r;
    cin >> r;
    ll ans = 1;

    ll cnt1 = 0;
    rep(ni,r) {
        if (dis(0.5, (ni+1)+0.5) <= r) cnt1++;
    }
    ans += cnt1*2;

    ll cnt2 = 0;
    rep(nj,r) {
        int yes = 0, no = r;
        while (yes + 1 != no) {
            int mid = (yes + no)/2;
            if (dis(1.5+nj, mid+0.5) <= r) yes = mid;
            else no = mid;
        }
        cnt2 += 1+(yes*2);
    }
    ans += cnt2*2;

    cout << ans-2 << endl;
return 0;
}