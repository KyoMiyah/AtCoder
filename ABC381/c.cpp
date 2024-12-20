#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i,n) {
        if (s[i] == '/') {
            int n1 = i, n2 = i;
            while (n1-1 >= 0 && s[n1-1] == '1' && s[n2+1] == '2' && n2+1 <n) {
                n1--; n2++;
            }
            ans = max(ans,n2-n1+1);
        }
    }

    cout << ans << endl;
return 0;
}