#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, c;
    cin >> n >> c;
    int ans = 1;
    int first;
    cin >> first;
    int now = first;
    rep(i,n-1) {
        int a;
        cin >> a;
        if (a-now >= c) {
            ans++;
            now = a;
        }
    }

    cout << ans << endl;
return 0;
}