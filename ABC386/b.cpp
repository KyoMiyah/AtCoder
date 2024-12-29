#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int ans = 0;
    int i = 0;

    while (i<n) {
        if (s[i] != '0') {
            ans++;
            i++;
        }
        else {
            int end = i;
            while (end < n && s[end] == '0') end++;
            int cnt = end - i;
            if (cnt % 2 == 0) ans += cnt/2;
            else ans += cnt/2 + 1;
            i = end;
        } 
    }

    cout << ans << endl;
return 0;
}