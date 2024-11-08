#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    rep(i,3) {
        if (s[i] == 'A') a++;
        if (s[i] == 'B') b++;
        if (s[i] == 'C') c++;
    }
    if (a==1 && b==1 && c==1) cout << "Yes" << endl;
    else cout << "No" << endl; 
return 0;
}