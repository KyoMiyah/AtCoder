#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    rep(i,h) rep(j,w) if (s[i][j] == '#') {
        if (i+1 < h) s[i+1][j] ='/';
        if (i-1 >= 0) s[i-1][j] ='/';
        if (j+1 < w) s[i][j+1] ='/';
        if (j-1 >= 0) s[i][j-1] ='/';
    }

    int ans = 1;

    auto dfs = [&] (auto f, int i, int j) -> void {
        if (i >= h || j >= w || i<0 || j<0) return;
        if (s.count(a[i][j])) return;
        if (i == h-1 && j == w-1) {
            ans++;
            return;
        }
        s.insert(a[i][j]);
        f(f,i,j+1);
        f(f,i+1,j);
        f(f,i-1,j);
        f(f,i,j-1);
        s.erase(a[i][j]);
    };

    rep(i,h) rep(j,w) if (s[i][j] != '/' && s[i][j] != '#') dfs(dfs,i,j);
return 0;
}