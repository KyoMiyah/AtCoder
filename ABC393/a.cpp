#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 =="sick" && s2 == "sick") cout << 1 << endl;
    if (s1 =="fine" && s2 == "fine") cout << 4 << endl;
    if (s1 =="sick" && s2 == "fine") cout << 2 << endl;
    if (s1 =="fine" && s2 == "sick") cout << 3 << endl;
return 0;
}