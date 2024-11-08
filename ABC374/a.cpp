#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    if (s[n-1] == 'n' && s[n-2] == 'a' && s[n-3] == 's') cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}