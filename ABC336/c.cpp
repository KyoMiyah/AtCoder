#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    n--;
    if (n==0) {
        cout << 0 << endl;
        return 0;
    }
    vector<char> a = {0,2,4,6,8};
    string ans;
    while (n!=0) {
        int s = n % 5;
        n /= 5;
        ans += to_string(a[s]);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
return 0;
}