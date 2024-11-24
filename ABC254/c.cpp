#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    
    vector<int> aa = a;
    while(1) {
        int cnt = 0;
        rep(i,n-k) {
            if (aa[i] > aa[i+k]) {
                swap(aa[i],aa[i+k]);
                cnt++;
            }
        }
        if (cnt == 0) break;
    }

    sort(a.begin(), a.end());

    if (a == aa) cout << "Yes" << endl;
    else cout << "No" << endl;


return 0;
}