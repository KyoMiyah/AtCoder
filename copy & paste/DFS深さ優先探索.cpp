#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

//dfsは木構造との相性がいい
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> to(n+1);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    vector<int> ans; //答えを復元する関数
    auto dfs = [&] (auto f, int v, int p = -1) -> bool {　//vは今いるところ、pは親。
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

    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
return 0;
}