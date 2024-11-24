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
    int nn = min(n-k,k);
    rep(i,nn) {
        vector<int> b;
        int now = i;
        while (now < n) {
            b.push_back(a[now]);
            now += k;
        }
        sort(b.begin(), b.end());
        int now2 = i;
        rep(j,b.size()) {
            aa[now2] = b[j];
            now2 += k;
        }
    }

    sort(a.begin(), a.end());


    if (a == aa) cout << "Yes" << endl;
    else cout << "No" << endl;


return 0;
}