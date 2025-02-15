#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    bool ok = false;
    if (a1*a2 == a3) ok = true;
    if (a3*a2 == a1) ok = true;
    if (a1*a3 == a2) ok = true;
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;    
return 0;
}