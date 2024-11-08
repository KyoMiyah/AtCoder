#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,n-2) {
        if (s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') cnt++;
    }
    rep(i,q) {
        int x;
        cin >> x;
        x--;
        char c;
        cin >> c;
        if (c == 'A') {
            if (s[x] != 'A' && s[x+1] == 'B' && s[x+2] == 'C') cnt++;
        }
        if (c == 'B') {
            if (s[x] != 'B' && s[x-1] == 'A' && s[x+1] == 'C') cnt++;
        }
        if (c == 'C') {
            if (s[x] != 'C' && s[x-2] == 'A' && s[x-1] == 'B') cnt++;
        }

        if (s[x] == 'A' && c != 'A' && s[x+1] == 'B' && s[x+2] == 'C') cnt--;
        if (s[x] == 'B' && c != 'B' && s[x-1] == 'A' && s[x+1] == 'C') cnt--;
        if (s[x] == 'C' && c != 'C' && s[x-2] == 'A' && s[x-1] == 'B') cnt--;
        cout << cnt << endl;
        s[x] = c;
    }
return 0;
}