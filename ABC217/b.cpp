#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<string> t = {"ABC" , "ARC" , "AGC" , "AHC"}; 
    vector<bool> ans(4);
    rep(i,3) {
        string s;
        cin >> s;
        rep(j,4) if (s == t[j]) ans[j] = true;
    }
    rep(i,4) if (!ans[i]) cout << t[i] << endl;
return 0;
}