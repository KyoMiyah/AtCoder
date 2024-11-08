#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};

int main() {
    int n, q;
    cin >> n >> q;
    vector<P> xy;
    rep(i,n) xy.emplace_back(i+1,0);
    reverse(xy.begin(),xy.end());

    map<char,int> mp = {
        {'L',0},{'U',1},{'R',2},{'D',3}
    };

    rep(i,q) {
        int a; cin >> a;
        if (a == 1) {
            char b; cin >> b;
            int v = mp[b];
            auto[x,y] = xy.back();
            xy.emplace_back(x+dx[v],y+dy[v]);
        }
        else {
            int c; cin >> c;
            auto[x,y] = xy[xy.size()-c];
            cout << x << ' ' << y << '\n';
        }
    }
return 0;
}