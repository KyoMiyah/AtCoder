#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int, int>;

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<P> xy;
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        xy.emplace(a,b);
    }

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
        if (xy.count(P(a,b)) && h < k) {
            h = k;
            xy.erase(P(a,b));
        }
    }
    cout << "Yes" << endl;
return 0;
}