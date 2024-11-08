#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int ham (string& s, string& t) {
    if (s.size() != t.size()) return 999;
    int res = 0;
    rep(i,s.size()) if (s[i] != t[i]) res++;
    return res;
}

bool f (string& s, string& t) {
    if (s.size() != t.size()+1) return false;
    int si = 0;
    rep(ti,t.size()) {
        while (si < s.size() && s[si] != t[ti]) si++;
        if (si == s.size()) return false;
        si++;
    }
    return true;
}

int main() {
    int n; string t;
    cin >> n >> t;
    vector<int> ans;
    
    rep(i,n) {
        string s;
        cin >> s;
        bool ok = false;
        if (s.size()+1 >= t.size()) {
        if (f(s,t)) ok = true;
        if (f(t,s)) ok = true;
        if (ham(s,t) <= 1) ok = true;
    }
    if (ok) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    for (int i : ans) cout << i << ' ';
    cout << endl;

return 0;
}