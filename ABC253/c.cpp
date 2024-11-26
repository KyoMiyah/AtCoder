#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    map<int,int> r;
    rep(i,q) {
        int j;
        cin >> j;
        if (j == 1) {
            int x;
            cin >> x;
            r[x]++;
        }
        if (j == 2) {
            int x, c;
            cin >> x >> c;
            int xmin = min(c,r[x]);
            r[x] -= xmin;
        }
        if (j == 3) {
            auto smax = r.rbegin();
            auto smin = r.begin();
            cout << smax -> first - smin -> first << endl;
        }        
    }
return 0;
}