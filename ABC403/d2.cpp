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

    map<int,int> to;
    for (int num : a) to[num]++;

    int nn = to.size();
    vector<P> aa;
    for (const auto& pair : to) {
        aa.push_back({pair.first, pair.second});
    } 

    rep(i,aa.size()) cout << aa[i].first << ' ' << aa[i].second << endl;

    
    return 0;
}