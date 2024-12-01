#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    int dif = n-m;
    vector<vector<int>> a(dif);
    rep(i,n) {
        rep(j,dif) {
            int x = j+1+i*10;
            a[i].push_back(x);
        }
    }
    vector<vector<int>> b;
    rep(i,n) rep(j,a[i].size()) 
return 0;
}