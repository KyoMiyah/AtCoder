#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, r;
    cin >> n >> r;
    rep(i,n) {
        int d, a;
        cin >> d >> a;
        if (d == 1) {
            if (1600 <= r && r <= 2799) r += a;
        }
        if (d == 2) {
            if (1200 <= r && r <= 2399) r += a;
        }
    }

    cout << r << endl;
return 0;
}