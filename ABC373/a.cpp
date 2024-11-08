#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int cnt = 0;
    rep(i,12) {
        string s;
        cin >> s;
        if (s.size() == i+1) cnt ++;
    }
    cout << cnt << endl;
return 0;
}