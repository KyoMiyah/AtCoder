#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) x[i] = i+1;

    rep(i,q) {
        int a, b;
        cin >> a >> b;
        if (a == 2) cout << x[b-1] << ' ' << y[b-1] << endl;
        else {
            for (int i=n-1; i>0; i--) {
                x[i] = x[i-1];
                y[i] = y[i-1];
            }
            if (b == 'U') y[0]++;
            if (b == 'D') y[0]--;
            if (b == 'R') x[0]++;
            if (b == 'L') x[0]--;
        }
    }
return 0;
}