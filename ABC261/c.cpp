#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    unordered_map<string,int> a;
    rep(i,n) {
        string s;
        cin >> s;
        auto it = a.find(s);
        if (it != a.end()) {
            cout << s << '(' << it->second << ')' << endl;
        }
        else cout << s << endl;
        a[s]++;
    }
return 0;
}