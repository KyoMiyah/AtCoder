#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, abc;
    cin  >> s;
    vector<bool> a(26);
    abc = "abcdefghijklmnopqrstuvwxyz";
    rep(i,s.size()) {
        a[int(s[i]-'a')] = true;
    }
    rep(i,26) {
        if (!a[i]) {
            cout << abc[i] << endl;
        return 0;
        }
    }
return 0;
}