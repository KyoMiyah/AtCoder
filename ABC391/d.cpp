#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, w;
    cin >> n >> w;
    vector<vector<int>> x(w);
    vector<tuple<int,int,bool>> num(n);
    rep(i,n) {
        int x1, y1;
        cin >> x1 >> y1;
        x1--; y1--;
        x[x1].push_back(y1);
        num[i] = {x1,y1,true};
    }
    for (auto v : x) sort(v.begin(), v.end());
 
    int q;
    cin >> q;
    rep(nq,q) {
        vector<int> bottom(w);
        int bmax = -1;
        rep(i,w) {
            if (x[i].size() == 0) {
                rep(j,q-nq) cout << "Yes" << endl;
                return 0;
            }
            else {
                bottom[i] = x[i][0];
                bmax = max(bmax, x[i][0]);
            }
        }
        int t, a;
        cin >> t >> a;
        a--;
        if (bmax >= t) cout << "Yes" << endl;
        else {
            
        }
    }
return 0;
}