#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    int i = 0, j = n, x = 0;
    while(i+1 < j) {
        x++;
        if (a[i] == x) i++;
        else j -= 2;
    }
    if (a[i] == x+1) cout << x+1 << endl;
    else cout << x << endl;
return 0;
}