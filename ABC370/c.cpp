#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;
    vector<string> x;

    while (s != t) {
        string best;
        rep(i,s.size()) {
            string ss = s;
            if (s[i] != t[i]) {
                ss[i] = t[i];
             if (best == "") best = ss;
             else best = min(best,ss);
            }
        }
        x.push_back(best);
        s = best;
    }

    cout << x.size() << endl;
    for(string s : x) cout << s << endl;
return 0;
}