#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;
    rep(i,3) t[i] = tolower(t[i]);

    auto isSubarray = [&](string x) -> bool {
        int xi = 0;
        for (char c : s) {
            if (x[xi] == c) xi++;
            if (x.size() == xi) return true;
        }
        return false;
    };

    if (isSubarray(t)) {
        cout << "Yes" << endl;
        return 0;
    }

    if (t.back() == 'x') {
        t.pop_back();
        if (isSubarray(t)) {
        cout << "Yes" << endl;
        return 0;
        }
    }

    cout << "No" << endl;
return 0;
}