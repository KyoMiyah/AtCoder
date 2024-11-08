#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

int main() {
    int n, q;
    cin >> n >> q;
    vector<P> xy;
    rep(i,n) xy.emplace_back(i+1,0);
    reverse(xy.begin(),xy.end());

    map<char,int> mp ={
        {'L',0},{'R',2},{'U',3},{'D',1}
    };

    rep(i,q) {
        int a;
        cin >> a;
        if (a == 2) {
            int p;
            cin >> p;
            auto[x,y] = xy[xy.size()-p];
            cout << x << ' ' << y << '\n';
        }
        else {
            char b;
            cin >> b;
            int v = mp[b];
            auto[x,y] = xy.back();
            xy.emplace_back(x+dx[v], y+dy[v]);
        }
    }
return 0;
}