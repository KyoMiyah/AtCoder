#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    vector<int> x(m), y(m);
    rep(i,m) cin >> x[i] >> y[i];

    int a = 0, b = 0;

    rep(i,n) {
        h--;
        if (h<0) {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] == 'R') a++;
        if (s[i] == 'L') a--;
        if (s[i] == 'U') b++;
        if (s[i] == 'D') b--;
        rep(j,x.size()) if (a == x[j] && b == y[j] && h < k) {
            h = k;
            x.erase(x.begin()+j);
            y.erase(y.begin()+j);
        }
    }
    cout << "Yes" << endl;
return 0;
}