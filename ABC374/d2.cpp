#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    double s, t;
    cin >> s >> t;
    vector<double> a(2*n), b(2*n);
    rep(i,2*n) cin >> a[i] >> b[i];

    vector<int> jun(2*n);
    rep(i,2*n) jun[i] = i;

    double ans = 1e9;

    do{
        double time = 0;
        bool ok = true;
        for (int i=0; i<2*n; i += 2) if (jun[i] / 2 != jun[i+1] / 2) ok = false;
        if (ok) {
        time += sqrt(a[jun[0]]*a[jun[0]] + b[jun[0]]*b[jun[0]])/s;
        for (int i=0; i<2*n; i += 2) time += sqrt((a[jun[i+1]]-a[jun[i]])*(a[jun[i+1]]-a[jun[i]]) + (b[jun[i+1]]-b[jun[i]])*(b[jun[i+1]]-b[jun[i]]))/t;
        if (n > 1) for (int i=1; i<2*n-1; i += 2) time += sqrt((a[jun[i+1]]-a[jun[i]])*(a[jun[i+1]]-a[jun[i]]) + (b[jun[i+1]]-b[jun[i]])*(b[jun[i+1]]-b[jun[i]]))/s;
        ans = min(time, ans);
        }
    }while(next_permutation(jun.begin(),jun.end()));

    printf("%.7f\n", ans);

return 0;
}