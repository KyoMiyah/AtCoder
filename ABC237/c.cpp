#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    string ss = s;
    int cnt = 0, cnt2 = 0;
    while (ss[cnt2] == 'a') cnt2++;
    reverse(ss.begin(), ss.end());
    while (ss[cnt] == 'a') cnt++;
    rep(i,cnt-cnt2) ss += 'a';
    string sss = ss;
    reverse(ss.begin(),ss.end());
    if (sss == ss) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}