#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    int ans = 0;
    rep(i,n) {
        if (s[i] == 'O') cnt++;
        else cnt = 0;
        if (cnt == k) {
            ans++;
            cnt = 0;
        }
    }

    cout << ans << endl;
return 0;
}