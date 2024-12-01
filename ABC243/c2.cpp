#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
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
        vector<int> ids = p.second;
        vector<pair<int,char>> dt;
        for (int i : ids) {
            dt.emplace_back(x[i],s[i]);
        }
        sort(dt.begin(), dt.end());
        rep(i,dt.size()-1) {
            if (dt[i].second == 'R' && dt[i+1].second == 'L') {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
return 0;
}