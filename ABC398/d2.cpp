#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    string s;
    cin >> s;
    int x = abs(r)+ abs(c);
    vector<int> xy(4);
    set<P> cnt;

    if (x > n) {
        rep(i,n) cout << 0;
        cout << endl;
        return 0;
    }

    rep(i,x-1) cout << 0;

    rep(i,x) {
        if (s[i] == 'N') xy[0]++;
        if (s[i] == 'E') xy[1]++;
        if (s[i] == 'S') xy[2]++;
        if (s[i] == 'W') xy[3]++;
    }

    cnt.insert({xy[2]-xy[0],xy[1]-xy[3]});
    if (cnt.count({r,c})) cout << 1;
    else cout << 0;

    for (int i=x; i<n; i++) {
        if (s[i] == 'N') {
            r--;
        }
        if (s[i] == 'E') {
            c++;
        }
        if (s[i] == 'S') {
            r++;
        }
        if (s[i] == 'W') {
            c--;
        }
        
        if (s[i-x] == 'N') xy[0]--;
        if (s[i-x] == 'E') xy[1]--;
        if (s[i-x] == 'S') xy[2]--;
        if (s[i-x] == 'W') xy[3]--;

        cnt.insert({xy[2]-xy[0],xy[1]-xy[3]});
        if (cnt.count({r,c})) cout << 1;
        else cout << 0;
    }

    cout << endl;

return 0;
}