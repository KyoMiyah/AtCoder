#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    int cnt = 0;
    rep(i,n) if (s[i] == '.') cnt ++;
    cout << cnt + d << endl;
return 0;
}