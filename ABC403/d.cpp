#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    vector<P> aa;
    int i = 0;
    while(1) {
        int cnt = 1;
        if (i+1 < n && a[i] != a[i+1]){
            aa.push_back({a[i],1});
            i++;
        }
        else {
            while (i+1 < n && a[i] == a[i+1]) {
            cnt++;
            i++;
        }
        aa.push_back({a[i-1],cnt});
    }
    if (i >= n) break;
    }

    rep(i,aa.size()) cout << aa[i].first << ' ' << aa[i].second << endl;
    return 0;
}