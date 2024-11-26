#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    map<int,int> r;
    set<int> s;
    rep(i,q) {
        int j;
        cin >> j;
        if (j == 1) {
            int x;
            cin >> x;
            if (!s.count(x)) s.insert(x);
            r[x]++;
        }
        if (j == 2) {
            int x, c;
            cin >> x >> c;
            int xmin = min(c,r[x]);
            if (xmin == r[x]) s.erase(x);
            r[x] -= xmin;
        }
        if (j == 3) {
            auto smax = *s.rbegin();
            auto smin = *s.begin();
            cout << smax - smin << endl;
        }        
    }
return 0;
}