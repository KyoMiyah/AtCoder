#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin >> x[i] >> y[i];

    auto near = [&] (int i, int j) {
        int dx = x[i]-x[j];
        int dy = y[i]-y[j];
        return dx*dx + dy*dy <= d*d;
    };

    queue<int> q;
    vector<bool> ans(n);
    ans[0] = true; q.push(0);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        rep(u,n) {
            if (near(v,u)) {
                if (ans[u]) continue;
                ans[u] = true;
                q.push(u);
            }
        }
    }

    rep(i,n) {
        if (ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
return 0;
}