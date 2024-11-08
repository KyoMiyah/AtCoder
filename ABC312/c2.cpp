#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> a;
    rep(i,n) {
        int x;
        cin >> x;
        a.emplace_back(x,0);
    }
    rep(i,m) {
        int x;
        cin >> x;
        a.emplace_back(x,1);
    }
    sort(a.begin(), a.end());
    int na = 0, nb = m;
    
    rep(i,n+m) {
        if (a[i].second == 0) {
            na++;
            if (na >= nb) {
                cout << a[i].first << endl;
                return 0;
            }
        }
        if (a[i].second == 1) {
            nb--;
            if (na >= nb) {
                cout << a[i].first+1 << endl;
                return 0;
            }
        }
    }


return 0;
}