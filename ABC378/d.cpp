#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int dfs(int i, int j, int k, vector<string> s) {
    
}

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(i,h) rep(j,w) ans += dfs(i,j,k,s);

    cout << ans << endl;
    
return 0;
}