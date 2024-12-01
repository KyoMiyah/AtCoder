#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) {
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;

    map<int,vector<int>> to;
    rep(i,n) {
        to[y[i]].push_back(i);
    }

    for (auto p : to) {
        vector<int> dt = p.second;
        int rmin = 1e9+5, lmax = 0;
        for (int value : dt) {
        if (s[value] == 'R') rmin = min(rmin,x[value]);
        else lmax = max(lmax,x[value]);
        }
            if (rmin < lmax) {
                cout << "Yes" << endl;
                return 0;
        }
    }
    cout << "No" << endl;
return 0;
}