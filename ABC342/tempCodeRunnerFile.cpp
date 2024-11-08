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

    string abc = "abcdefghijklmnopqrstuvwxyz";
    string abc2 = abc;
    rep(i,q) {
        char c, d;
        cin >> c >> d;
        rep(j,26) if (abc2[j] == c) abc2[j] = d;
    }

    rep(i,n) rep(j,26) {
        if (s[i] == abc[j]) s[i] = abc2[j];
    }

    cout << s << endl;
return 0;
}