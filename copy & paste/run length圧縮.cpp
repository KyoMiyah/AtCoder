#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<char,int>;

void a (string s, vector<P> &vec) {
    int cnt = 1;
    rep(i,s.size()-1) {
        if (s[i] != s[i+1]) {
            vec.push_back(P(s[i],cnt));
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back(P(s.back(),cnt));
}

int main(void) {
    string s, t;
    cin >> s >> t;
    vector<P> svec, tvec;

    a(s, svec); a(t, tvec);

    bool ans = true;

    if (svec.size() != tvec.size()) {
        cout << "No" << endl;
        return 0;
    }
    rep(i,svec.size()) {
        if (svec[i].first != tvec[i].first) ans = false;
        else if (svec[i].second == 1 && tvec[i].second != 1) ans = false;
        else if (svec[i].second > tvec[i].second) ans = false;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
return 0;
}