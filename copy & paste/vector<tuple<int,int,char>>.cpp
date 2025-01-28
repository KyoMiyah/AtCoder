#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<tuple<int,int,char>> points;

    rep(i,m) {
        int x, y; char c;
        cin >> x >> y >> c;
        points.emplace_back(x,y,c);
    }

    sort(points.rbegin(), points.rend());
    int ymax = -1;
    for (auto [x,y,c] : points) {
        if (c == 'B') ymax = max(y,ymax);
        else {
            if (y <= ymax) {
            cout << "No" << endl;
            return 0;
        }
        }
    }

    cout << "Yes" << endl;

return 0;
}