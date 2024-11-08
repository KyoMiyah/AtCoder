#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    string sa = to_string(a);
    string sb = to_string(b);
    long long aa = 0, bb = 0;
    long long kk = 1;
    rep(i,sa.size()) {
        aa += (a%10)*kk;
        a /= 10;
        kk *= k;
    }
    long long kk2 = 1;
    rep(i,sb.size()) {
        bb += (b%10)*kk2;
        b /= 10;
        kk2 *= k;
    }
    cout << aa * bb << endl;
return 0;
}