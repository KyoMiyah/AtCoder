#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<ll> a;
    rep(nq,q) {
        int i;
        cin >> i;
        if (i == 1) {
            a.push_back(0);
        }
        if (i == 2) {
            int t;
            cin >> t;
            rep(j,a.size()) a[j] += t;
        }
        if (i == 3) {
            int h;
            cin >> h;
            int big = 0;
            int n = a.size();
            while (big < n && a[big] >= h) big++;
            cout << big << endl;
            a.erase(a.begin(), a.begin()+big);
        }
    }
return 0;
}