#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    string sx, sy;
    int i = 0;
    while(1) {
        if (s[i] == '.') break;
        sx += s[i];
        i++;
    }
    i++;
    sy = s[i];

    int x = stoi(sx);
    int y = stoi(sy);

    if (0 <= y && y <= 2) cout << x << '-' << endl;
    if (3 <= y && y <= 6) cout << x << endl;
    if (7 <= y && y <= 9) cout << x << '+' << endl;
return 0;
}