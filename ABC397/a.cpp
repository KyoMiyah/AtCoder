#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    double x;
    cin >> x;
    if (x >= 38.0) cout << 1 << endl;
    else if (x < 37.5) cout << 3 << endl;
    else cout << 2 << endl;
return 0;
}