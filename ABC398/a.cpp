#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string ans;
    if(n%2 == 0) {
        int nn = n;
        nn /= 2;
        rep(i,nn-1) ans+= "-";
        ans += "==";
        rep(i,nn-1) ans+= "-";
    }
    else {
        int nn = n;
        nn /= 2;
        rep(i,nn) ans+= "-";
        ans += "=";
        rep(i,nn) ans+= "-";
    }

    cout << ans << endl;
return 0;
}