#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, P> tate, yoko;
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        char c;
        cin >> c;

        if (c == 'W') {
            yoko[x].first = y;
            tate[y].first = x;
        }
        if (c == 'B') {
            yoko[x].second = y;
            tate[y].second = x;            
        }
    }

    bool ans = true;
    for (auto [white, black] : yoko) {
        if ()
    }
return 0;
}