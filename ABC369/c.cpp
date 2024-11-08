#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 2*n-1;
    for (int l=0; l<n-2; l++) {
        for (int r=l+2; r<n; r++) {
            bool hantei = true;
            for (int i=l; i<=r-1; i++) {
                if (a[i+1]-a[i] != a[l+1]-a[l]) hantei = false;
            }
            if (hantei) ans++;
        }
    }
    cout << ans << endl;
return 0;
}