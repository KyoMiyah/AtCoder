#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n; string s;
    cin >> n >> s;
    int cnt = 0;
    string ss = s;
    rep(i,n) {
        if (s[i] == '"') cnt++;
        if (s[i] == ',' && cnt%2 == 0) ss[i] = '.';
    }
    cout << ss << endl;
return 0;
}