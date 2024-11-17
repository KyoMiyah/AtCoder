#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string n;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0;
    rep(i,6) {
        if (n[i] == '1') a1++;
        if (n[i] == '2') a2++;
        if (n[i] == '3') a3++;
    }
    if (a1 == 1 && a2 == 2 && a3 == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}