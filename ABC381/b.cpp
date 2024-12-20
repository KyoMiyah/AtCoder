#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    bool ok = true;
    if (s.size()%2 != 0) ok = false;
    vector<int> abc(26);
    rep(i,s.size()) abc[s[i]-'a']++;
    rep(i,26) if (abc[i] > 2) ok = false;
    rep(i,s.size()/2) if (s[2*i] != s[2*i+1]) ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}