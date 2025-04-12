#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t;
    int maru = 0;
    rep(i,n) if (s[i] == 'o') maru++;
    maru -= k;
    maru *= -1;
    rep(i,n) t += '!';
    rep(i,n) {
     if (s[i] == '.') t[i] = '.';
     if (s[i] == 'o') t[i] = 'o';
     if (s[i] == 'o') {
        if (s[i+1] == '?' && i+1 < n) {
            t[i+1] = '.';
            s[i+1] = '.';
        }
        if (s[i-1] == '?' && i-1 >= 0) {
            t[i-1] = '.';
            s[i-1] = '.';
        }
     }
     if (s[i] == '?') {
        if ((s[i+1] == 'o' && i+1 < n) || (s[i-1] == 'o' && i-1 >= 0)) {
            t[i] = '.';
            s[i] = '.';
        }
     }
     if (s[i] == '.') {
        if ((s[i-2] == '.' && i-2 >= 0) && (s[i-1] == '?' && i-1 >= 0)) {
            t[i-1] = '%';
        }
        if ((s[i+2] == '.' && i+2 < n) && (s[i+1] == '?' && i+1 < n)) {
            t[i+1] = '%';
        }
     }
    }

    int cnt = 0;
    rep(i,n) if (t[i] == '%') cnt++;
    if (cnt == maru) {
        rep(i,n) if (t[i] == '%') t[i] = 'o';
    }
    rep(i,n) if (t[i] == '!' || t[i] == '%') t[i] = '?';
    cout << t << endl;
return 0;
}