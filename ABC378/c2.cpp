#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int,vector<int>> to;
    rep(i,n) {
        int a;
        cin >> a;
        if (to[a].size() == 0) {
            cout << -1 << ' ';
            to[a].push_back(i+1);
            continue;
        }
        cout << to[a].back() << ' ';        
        to[a].push_back(i+1);
    }
    cout << endl;
    
return 0;
}