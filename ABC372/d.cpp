#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    rep(i,n) {
        int cnt = 0;
        int hmax = 0;
        for (int j=i+1; j<n; j++) {
            if (h[j] > hmax) {
                hmax = h[j];
                cnt++;
            }
        }
        cout << cnt << ' ';
    }

    cout << endl;
return 0;
}