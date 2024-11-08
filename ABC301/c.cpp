#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    string s, t;
    cin >> s >> t;
    vector<int> a(27), b(27);
    rep(i,s.size()) {
        if (s[i] == '@') a[26]++;
        else a[s[i]-'a']++;
    }
    rep(i,t.size()) {
        if (t[i] == '@') b[26]++;
        else b[t[i]-'a']++;
    }

    bool ok = true;
    rep(i,26) if (a[i] != b[i] && i!=0 && i!=19 && i!=2 && i!=14 && i!=3 && i!=4 && i!=17) ok = false;
    if (!ok) {
        cout << "No" << endl;
        return 0;
    }

    int a1 = 0, b1 = 0;
    rep(i,26) if (b[i]>a[i]) a1 += b[i]-a[i];
    rep(i,26) if (b[i]<a[i]) b1 += a[i]-b[i];
    if (a1 <= a[26] && b1 <= b[26]) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

return 0;
}