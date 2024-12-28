#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int a,b, c;
    cin >> a >> b >> c;
    bool ok = false;
    if (a+b == c || a+c == b || b+c == a || (a==b && a == c)) ok = true;
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}