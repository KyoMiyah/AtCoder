#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m), w(m);
    rep(i,m) {
        cin >> u[i] >> v[i] >> w[i];
        u[i]--; v[i]--;
    }
    
    vector<P> p(n);
    vector<bool> hantei(n);
    rep(i,n) {
        p[i].first = i;
        p[i].second = 0;
    }

    int cnt = 0;
    while (cnt != m) {
        rep(i,m) if (!hantei[v[i]]){
            p[v[i]].second = p[u[i]].second + w[i];
            hantei[v[i]] = true;
        }
        cnt ++;
    }

    rep(i,n) cout << p[i].second << ' ';
    cout << endl;
return 0;
}