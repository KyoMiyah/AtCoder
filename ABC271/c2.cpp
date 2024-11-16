#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    map<int,int> to;
    rep(i,n) {
        to[a[i]]++;
    }
    vector<int> b;
    int cnt = 0;
        for (auto it = to.rbegin(); it != to.rend(); ++it) {
        cnt += it->second -1;
        b.push_back(it->first);
    }
    rep(i,cnt) b.push_back(1e9);

    sort(b.begin(), b.end());

    int i = 0, j = n, x = 0;
    while(i+1 < j) {
        x++;
        if (b[i] == x) i++;
        else j -= 2;
    }
    if (b[i] == x+1) cout << x+1 << endl;
    else cout << x << endl;
return 0;
}