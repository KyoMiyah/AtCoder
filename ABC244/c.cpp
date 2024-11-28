#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    set<int> done;
    int nn = 0;
    while(1) {
    if (nn>0) {
        int x;
        cin >> x;
        if (x == 0) return 0;
        done.insert(x);
    }
    for (int i=1; i<=2*n+1; i++) {
        if (done.count(i) == 0) {
            done.insert(i);
            nn++;
            cout << i << endl;
            break;
        }
    }
    }

return 0;
}