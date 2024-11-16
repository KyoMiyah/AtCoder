#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int,int> to; 
    rep(i,n) {
        int a;
        cin >> a;
        to[a]++;
    }
        for (auto it = to.rbegin(); it != to.rend(); ++it) {
        cout << it->second << endl;
    }
    int cnt = n-to.size();
    rep(i,cnt) cout << 0 << endl;
return 0;
}