#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int i = 0;
    int cnt = 0;
    while(i < s.size()) {
        if (s[i] == 'i' && s[i+1] == 'o') {
            cnt += 2;
            i += 2;
        }
        else i++;
    }

    cout << s.size() - cnt << endl;
return 0;
}