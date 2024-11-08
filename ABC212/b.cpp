#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int a;
    cin >> a;
    int x4 = a%10;
    a /= 10;
    int x3 = a%10;
    a /= 10;
    int x2 = a%10;
    a /= 10;
    int x1 = a%10;

    bool ans = true;
    if (x1 == x2 && x1 == x3 && x1 == x4) ans = false;
    if ((x2-x1+10)%10==1 && (x3-x2+10)%10==1 && (x4-x3+10)%10==1) ans = false;
    if (ans) cout << "Strong" << endl;
    else cout << "Weak" << endl;
return 0;
}