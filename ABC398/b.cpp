#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<int> a(7);
    rep(i,7) {
        cin >> a[i];
        a[i]--;
    }

    for (int x=0; x < (1<<7); x++) {
        vector<int> aa;
        rep(nx,7) {
        if (x>>nx&1) aa.push_back(a[nx]);
        }
        if (aa.size() != 5) continue;
        vector<int> cnt(13);
        for (int c : aa) cnt[c]++;
        int c2 = 0, c3 = 0;
        rep(i,13) {
            if (cnt[i] == 2) c2++;
            if (cnt[i] == 3) c3++;
        }
        if (c2 == 1 && c3 == 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
return 0;
}