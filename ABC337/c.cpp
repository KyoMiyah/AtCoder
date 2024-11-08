#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i,n) cin >> a[i].first;
    rep(i,n) a[i].second = i+1;
    
    vector<int> ans;
    int prev = 0;
    int cnt = 0;
    while(1) {
        if (cnt == n) break;
        rep(i,n) {
        if (a[i].first == -1) {
            ans.push_back(a[i].second);
            prev = a[i].second;
            break;
        }
        if (a[i].first == prev) {
            ans.push_back(a[i].second);
            prev = a[i].second;
            break;  
        }
        }
        cnt++;
    }

    rep(i,n) cout << ans[i] << ' ';
    cout << endl;


return 0;
}