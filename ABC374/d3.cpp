#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    double s, t;
    cin >> s >> t;
    vector<double> a(n), b(n), c(n), d(n);
    rep(i,n) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<int> jun(n);
    rep(i,n) jun[i] = i;

    long double ans = 1e18;

    do{
    for (int x=0; x < (1<<n); x++) {
        long double time = 0;
        vector<int> jun2(n);
        rep(nx,n) {
        if (x>>nx&1) jun2[nx] = 0;
        else jun2[nx] = 1;
        }
        if (jun2[0] == 0) time += sqrt(a[jun[0]]*a[jun[0]] + b[jun[0]]*b[jun[0]])/s;
        else time += sqrt(c[jun[0]]*c[jun[0]] + d[jun[0]]*d[jun[0]])/s;

        if (n > 1) rep(i,n-1) {
           if (jun2[i+1] == 0 && jun2[i] == 0) time += sqrt((a[jun[i+1]]-a[jun[i]])*(a[jun[i+1]]-a[jun[i]]) + (b[jun[i+1]]-b[jun[i]])*(b[jun[i+1]]-b[jun[i]]))/s;
           else if (jun2[i+1] == 1 && jun2[i] == 0) time += sqrt((c[jun[i+1]]-a[jun[i]])*(c[jun[i+1]]-a[jun[i]]) + (d[jun[i+1]]-b[jun[i]])*(d[jun[i+1]]-b[jun[i]]))/s;
           else if (jun2[i+1] == 0 && jun2[i] == 1) time += sqrt((a[jun[i+1]]-c[jun[i]])*(a[jun[i+1]]-c[jun[i]]) + (b[jun[i+1]]-d[jun[i]])*(b[jun[i+1]]-d[jun[i]]))/s;
           else if (jun2[i+1] == 1 && jun2[i] == 1) time += sqrt((c[jun[i+1]]-c[jun[i]])*(c[jun[i+1]]-c[jun[i]]) + (d[jun[i+1]]-d[jun[i]])*(d[jun[i+1]]-d[jun[i]]))/s;
        }
        rep(i,n) time += sqrt((a[jun[i]]-c[jun[i]])*(a[jun[i]]-c[jun[i]]) + (b[jun[i]]-d[jun[i]])*(b[jun[i]]-d[jun[i]]))/t;
        ans = min(time, ans);
    }
    }while(next_permutation(jun.begin(),jun.end()));

    printf("%.7f\n", ans);

return 0;
}