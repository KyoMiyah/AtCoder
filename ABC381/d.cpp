#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<int> b;
    rep(i,n/2) {
        if (a[2*i] == a[2*i+1]) b.push_back(a[2*i]);
        else b.push_back(0);
    }

    if (b.size() == 0) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    for (int start=0; start<b.size()-1; start++) {
        if (b[start] == 0) continue;
        set<int> al;
        al.insert(b[start]);
        int cnt = 1;
        for (int end=start+1; end<b.size(); end++) {
            if (al.count(b[end]) || b[end] == 0) break;
            cnt++;
        }
        ans = max(cnt,ans);
    }

    cout << ans*2 << endl;
return 0;
}