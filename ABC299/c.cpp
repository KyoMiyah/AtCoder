#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n; string s;
    cin >> n >> s;
    bool ok1 = true, ok2 = true;
    rep(i,n) {
        if (s[i] == '-') ok1 = false;
        if (s[i] == 'o') ok2 = false;
    }
    if (ok1 || ok2) {
        cout << -1 << endl;
        return 0;
    }

    string ss = "-";
    ss += s;
    ss += '-';

    int i = 0, j= 0;
    vector<int> ans;
    while (i<n+2 && j < n+2) {
        if (ss[i] == '-' && ss[j] == '-') {
            i++; j++;
        }
        if (ss[i] == 'o') {
            while (ss[j] == 'o') j++;
            ans.push_back(j-i);
            i = j;
        }
    }
    int cnt = 0;
    rep(ni, ans.size()) cnt = max(cnt,ans[ni]);
    cout << cnt << endl;
return 0;
}