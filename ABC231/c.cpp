#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.rbegin(), a.rend());

    vector<P> b(n);
    rep(i,n) {
        b[i].first = a[i];
        b[i].second = i+1;
    }

    rep(i,q) {
        int x;
        cin >> x;
        int no = n, yes = -1;
        while (yes + 1 != no) {
        int mid = (yes+no)/2;
        if (b[mid].first >= x) yes = mid;
        else no = mid;
        }
        cout << b[yes].second << endl;
    }
return 0;
}