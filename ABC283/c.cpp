#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> zero;
    int i = 0, j = 0;
    s += "1";
    while(i < n && j < n) {
        if (s[i] != '0' && s[j] != '0') {
            i++;
            j++;
        }
        if (s[i] == '0' && s[j] == '0') {
            while (s[j] == '0') j++;
            zero.push_back(j-i);
            i = j;
        }
    }
    int nn = 0;
    rep(ni,zero.size()) {
        nn += zero[ni]/2;
    }

    int ans = n - nn;
    cout << ans << endl;
return 0;
}