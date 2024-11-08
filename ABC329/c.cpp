#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> ans;

    rep(i,n) ans.insert(to_string(s[i]));
    string a;
    rep(i,n) {
        a += s[i];
        if (a.size() == 1) {
            continue;
        }
        if (a[a.size()-1] != a[a.size()-2]) {
            a = a.back();
            continue;
        }
        ans.insert(a);
    }

    cout << ans.size() << endl;
return 0;
}