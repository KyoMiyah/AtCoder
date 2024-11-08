#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s;
    rep(i,s.size()) {
        if (s[i] == '.') continue;
        else t += s[i];
    }
    cout << t << endl;
return 0;
}