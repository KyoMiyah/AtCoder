#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
const int mod = 998244353;

int main() {
    ll n;
    cin >> n;

    int keta = 0;
    ll nn = n;
    while (nn > 0) {
        keta++;
        nn /= 10;
    }
    cout << keta << endl;
}