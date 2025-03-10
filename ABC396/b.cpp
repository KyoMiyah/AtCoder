#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<int> a(100);
    rep(nq,q) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (t == 2) {
            cout << a.back() << endl;
            a.pop_back();
        }
     }
return 0;
}