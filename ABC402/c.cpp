#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<int,set<int>> ton;
    map<int,vector<int>> tom;
    rep(i,m) {
        int k;
        cin >> k;
        rep(nk,k) {
            int a;
            cin >> a;
            ton[a].insert(i+1);
            tom[i+1].push_back(a);
        }
    }
    vector<bool> hantei(m);
    set<int> can;
    rep(ni,n) {
        int b;
        cin >> b;
        can.insert(b);
        int cnt = 0;
        rep(i,m) {
            
        }
        cout << can.size() << endl;
    }
return 0;
}