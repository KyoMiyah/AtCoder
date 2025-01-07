#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    vector<int> ans; //答えを復元する関数
    auto dfs = [&] (auto f, int v, int p = -1) -> bool { //vは今いるところ、pは親。
        if (v == x) { //今xにいたらreturn true。
            ans.push_back(v); //return trueする直前にansに追加する。
            return true;
        }
        for (int u : to[v]) {
            if (u == p) continue;
            if (f(f, u, v)) { //行き先にxがあったらreturn true。
                ans.push_back(v); //return trueする直前にansに追加する。
                return true;
            }
        }
        return false;
    };
    dfs(dfs, y);

    
return 0;
}