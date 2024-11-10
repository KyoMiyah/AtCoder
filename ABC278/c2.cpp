#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;
    set<P> fol;
    rep(i,q) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) fol.emplace(a,b);
        if (t == 2) fol.erase(P(a,b));
        if (t == 3) {
            if (fol.count(P(a,b)) && fol.count(P(b,a))) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
return 0;
}