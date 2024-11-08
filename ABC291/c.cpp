#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int,int>;


int main() {
    int n; string s;
    cin >> n >> s;
    set<P> xy;
    int x = 0, y = 0;
    xy.emplace(x,y);
    rep(i,n) {
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;
        xy.emplace(x,y);
    }
    if (xy.size() == n+1) cout << "No" << endl;
    else cout << "Yes" << endl;
return 0;
}