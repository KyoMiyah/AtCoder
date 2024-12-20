#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;
    if (n%2 == 0) {
        cout << "No" << endl;
        return 0;
    }
    bool ok = true;
    int mid = (n+1)/2-1;
    rep(i,mid) if (s[i] != '1') ok = false;
    if (s[mid] != '/') ok = false;
    for (int i=mid+1; i<n; i++) if (s[i] != '2') ok = false;

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}