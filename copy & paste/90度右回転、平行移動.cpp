#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
//ABC218

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

//90度右方向回転
    auto rot = [&] (vector<string> a) {
        vector<string> res(n, string(n, '.'));
        rep(i,n) rep(j,n) res[j][n-i-1] = a[i][j];
        return res;
    };

//図形を左上端に寄せる
    auto normalize = [&] (vector<string> a) {
        int li = n, lj = n;
        rep(i,n) rep(j,n) if (a[i][j] == '#') {
            li = min(li,i);
            lj = min(lj,j);
        }
        vector<string> res(n, string(n, '.'));
        rep(i,n) rep(j,n) if (a[i][j] == '#') {
            res[i-li][j-lj] = '#';
        }
        return res;
    };

//二つの図形が同じかの判定
    auto same = [&] (vector<string> a, vector<string> b) {
        return normalize(a) == normalize(b);
    };

    rep(ri,4) {
        if (same(s, t)) {
            cout << "Yes" << endl;
            return 0;
        }
        t = rot(t);
    }

    cout << "No" << endl;
return 0;
}