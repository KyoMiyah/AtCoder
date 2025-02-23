#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
    rep(i,n) {
        if (s[i] == '(') a1++;
        if (s[i] == ')') a2++;
        if (s[i] == '[') b1++;
        if (s[i] == ']') b2++;
        if (s[i] == '<') c1++;
        if (s[i] == '>') c2++;       
    }
    if (a1 != a2 || b1 != b2 || c1 != c2) {
        cout << "No" << endl;
        return 0;
    }

    vector<char> ss;
    rep(i,n) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '<' || ss.size() == 0) {
            ss.push_back(s[i]);
            continue;
        }
        if ((ss.back() == '(' && s[i] == ')') || (ss.back() == '[' && s[i] == ']') || (ss.back() == '<' && s[i] == '>')) ss.pop_back();
    }

    if (ss.size() == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

return 0;
}