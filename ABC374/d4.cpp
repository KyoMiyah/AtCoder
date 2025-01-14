#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

double dis(double a, double b, double c, double d) {
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

int main() {
    int n;
    cin >> n;
    double s, t;
    cin >> s >> t;
    vector<double> a(n), b(n), c(n), d(n);
    rep(i,n) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<int> jun(n);
    rep(i,n) jun[i] = i;

    double ans = 1e18;

    do{
    for (int x=0; x < (1<<n); x++) {
        double time = 0;
        double nowx = 0, nowy = 0;
        vector<double> aa = a, bb = b, cc = c, dd = d;
        rep(i,n) {
        if (x>>i&1) {
            swap(cc[jun[i]], aa[jun[i]]);
            swap(dd[jun[i]], bb[jun[i]]);
        }
            time += dis(aa[jun[i]],bb[jun[i]],cc[jun[i]],dd[jun[i]])/t;
            time += dis(nowx,nowy,aa[jun[i]],bb[jun[i]])/s;
            nowx = cc[jun[i]], nowy = dd[jun[i]];
     }
        ans = min(time, ans);
        }
    }while(next_permutation(jun.begin(),jun.end()));

    printf("%.7f\n", ans);

return 0;
}