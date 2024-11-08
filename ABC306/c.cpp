#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(n);
    vector<P> x(n);
    rep(i,n) x[i].second = i+1;
    rep(i,3*n) {
        int a;
        cin >> a;
        a--;
        if (cnt[a] == 1) x[a].first = i;
        cnt[a]++;
    }

    sort(x.begin(), x.end());
    rep(i,n) cout << x[i].second << ' ';
    cout << endl;
return 0;
}