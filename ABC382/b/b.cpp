#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    reverse(s.begin(),s.end());
    int cnt = 0;
    int cnt2 = 0;
    rep(i,n) {
        if (s[i] == '@') cnt++;
        if (cnt == d) {
            cnt2 = i+1;
            break;
        }
    }

    string ans;
    rep(i,cnt2) ans += '.';
    for (int i=cnt2; i<n; i++) ans += s[i];

    reverse(ans.begin(),ans.end());
    cout << ans << endl;

return 0;
}