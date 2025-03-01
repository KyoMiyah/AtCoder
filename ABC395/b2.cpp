#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) rep(j,n) s[i].push_back('.');

    rep(i,n) {
        int j = n-i-1;
            if (i>j) continue;
            if (i % 2 == 0) {
                for (int ni=i; ni<=j; ni++) for (int nj=i; nj<=j; nj++) s[ni][nj] = '#';
            }
            else {
                for (int ni=i; ni<=j; ni++) for (int nj=i; nj<=j; nj++) s[ni][nj] = '.';
            }
    }

    rep(i,n) cout << s[i] << endl;

return 0;
}