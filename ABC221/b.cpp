#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    string s, t;
    cin >> s >> t;
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    rep(i,s.size()-1) {
        string w = s;
        swap(w[i],w[i+1]);
        if (w == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
return 0;
}