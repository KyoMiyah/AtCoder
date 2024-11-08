#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;

    string abc;
    rep(i,26) abc += char('a'+i);
    rep(i,q) {
        char c, d;
        cin >> c >> d;
        rep(j,26) if (abc[j] == c) abc[j] = d;
    }

    string ans;
    rep(i,n) {
        int j = s[i]-'a';
        s[i] = abc[j];
    }

    cout << s << endl;
return 0;
}