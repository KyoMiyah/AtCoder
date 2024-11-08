#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> d(n);
    rep(i,n) cin >> d[i];
    int t = d[0];
    rep(i,n) {
        d[i] -= t - 1;
        d[i] %= (a+b);
    }

    rep(j,a+b){
        bool ans = true;
         rep(i,n) {
     if ((d[i]+j)%(a+b) > a) ans = false;
    }
    if (ans) {
        cout << "Yes" << endl;
        return 0;
    }
    }
    cout << "No" << endl;
return 0;
}