#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;
    int si = 0, sj = 0, ti = 0, tj = 0;
    while(si != s.size()-1 || sj != s.size()-1 || ti != t.size()-1 || tj != t.size()-1) {
        if (s[si] != t[ti]) {
            cout << "No" << endl;
            return 0;
        }
        sj++;
        if (s[si] != s[sj]) {
            si++; ti++; tj++;
            continue;
        }
        while(s[si] == s[sj]) sj++;
        while(t[ti] == t[tj]) tj++;
        if (tj-ti < sj-si) {
            cout << "No" << endl;
            return 0;            
        }
        si = sj; ti = tj;
    }
    if (s.back() != t.back()) {
        cout << "No" << endl;
    }
    else cout << "Yes" << endl;
return 0;
}