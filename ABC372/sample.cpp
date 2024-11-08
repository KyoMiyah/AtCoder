#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<string> a(q);
    rep(i,q) {
        int x;
        cin >> x;
        x--;
        string c;
        cin >> c;
        a[i] = s.replace(x,1,c);
    }
    rep(i,q) {
    int ans = 0;
        rep(j,s.size()-2) {
            if (a[i][j] == 'A' && a[i][j+1] == 'B' && a[i][j+2] == 'C') ans ++;
        }
        cout << ans << endl;
    }
return 0;
}