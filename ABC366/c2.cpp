#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<int> cnt(1e6+1);
    int num = 0;
    rep(i,q) {
        int a;
        cin >> a;
        if (a == 3) {
            cout << num << endl;
        }
        if (a == 1) {
            int x;
            cin >> x;
            cnt[x]++;
            if (cnt[x] == 1) num++;
        }
         if (a == 2) {
            int x;
            cin >> x;
            cnt[x]--;
            if (cnt[x] == 0) num--;
        }       
    }
return 0;
}