#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    map<int,vector<int>> to; //1e9はvector<vector>で保存できないので、mapを使用する。
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    set<int> reach; //すでに見た頂点の集合。
    queue<int> q;
    q.push(1); reach.insert(1);
    while(!q.empty()) {
        int v = q.front(); q.pop();
        for (int u : to[v]) {
            if (reach.count(u)) continue; //すでに見た頂点は無視する。
            reach.insert(u);
            q.push(u);
        } 
    }

    cout << (*reach.rbegin()) << endl;
return 0;
}