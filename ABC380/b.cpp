#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int a = 0;
    for (int i=1; i<=s.size(); i++) {
        if (s[i] == '|') {
            cout << a << ' ';
            a = 0;
        }
        else a++;
    }
    cout << endl;
    return 0;
}