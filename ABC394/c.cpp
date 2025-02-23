#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<P> wwa;

    int i = 0;
    while(i<n) {
        int cnt = 0;
        if (s[i] != 'W') {
            i++;
            continue;
        }
        int si = i;
        while (s[i] == 'W') i++;
        if (s[i] != 'A') continue;
        wwa.push_back({si, i-si});
    }

    rep(i,wwa.size()) {
        s[wwa[i].first] = 'A';
        rep(j,wwa[i].second) s[wwa[i].first + j + 1] = 'C';
    }

    cout << s << endl;

return 0;
}