#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    n--;
    vector<ll> red(10);
    vector<ll> blue(10);

    red[n] = 1;
    while(n != 0) {
        red[n-1] += red[n];
        blue[n] += red[n]*x;
        red[n-1] += blue[n];
        blue[n-1] += blue[n]*y;
        n--;
    }
    cout << blue[0] << endl;
return 0;
}