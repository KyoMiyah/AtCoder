#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    double ans = 0;
    double x = 0, y = 0;
    rep(i,n) {
        double x1, y1;
        cin >> x1 >> y1;
        ans += sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
        x = x1; y = y1;
    }
    ans += sqrt(x*x+y*y);

    printf ("%.7f", ans);
return 0;
}
