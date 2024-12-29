#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    map<int,vector<P>> tox, toy;
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        char c;
        cin >> c;
        if (c == 'W') {
        tox[x].push_back({1,y});
        toy[y].push_back({1,x});
        }
        else {
        tox[x].push_back({0,-1*y});
        toy[y].push_back({0,-1*x});           
        }
    }

    bool ans = true;

    for (auto p : tox) {
        vector<P> ids = p.second;
        if (ids.size() == 1) continue;
        sort(ids.begin(),ids.end());
        int n = ids.size();
        if (ids[0].first == ids[n-1].first) continue;
        int black = -1*ids[0].second;
        int white = ids[n-1].second;
        if (black > white) ans = false;
    }

    for (auto p : toy) {
        vector<P> ids = p.second;
        if (ids.size() == 1) continue;
        sort(ids.begin(),ids.end());
        int n = ids.size();
        if (ids[0].first == ids[n-1].first) continue;
        int black = -1*ids[0].second;
        int white = ids[n-1].second;
        if (black > white) ans = false;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}