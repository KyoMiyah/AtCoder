#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;



int main() {
    ll n;
    cin >> n;
    
    ll k2 = 1;
    int k = 0;
    while(1) {
        if (k2 > n) break;
        k2 *= 2;
        k++;
    }
    cout << k-1 << endl;
return 0;
}