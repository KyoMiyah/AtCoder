#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (ll i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    string ans;
    while(n>0) {
        if (n%2==0) {
            n /= 2;
            ans += 'B';
        }
        else {
            n --;
            ans += 'A';
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

return 0;
}