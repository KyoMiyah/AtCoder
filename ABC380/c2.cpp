#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<P> a0, a1;
    int i = 0, j = 0;
    while(i<=n-1) {
        if (s[i] == '0') {
            while (s[j] == '0' && j <= n-1) j++;
            a0.push_back(P(i,j));
            i = j;
        }
        if (s[i] == '1') {
            while (s[j] == '1' && j <= n-1) j++;
            a1.push_back(P(i,j));
            i = j;
        }
    }
    int s1 = a1[k-2].first;
    int l1 = a1[k-2].second - a1[k-2].first;
    int s2 = a1[k-1].first;
    int l2 = a1[k-1].second - a1[k-1].first;

    string ans;
    rep(i,s1) ans += s[i];
    rep(i,l1+l2) ans += '1';
    rep(i,s2-s1-l1) ans += '0';
    for (int i=s2+l2; i<n; i++) ans += s[i];

    cout << ans << endl;

return 0;
}