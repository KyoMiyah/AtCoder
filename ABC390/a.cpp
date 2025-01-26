#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<int> a(5), ans(5),a1(5),a2(5),a3(5),a4(5);
    rep(i,5) cin >> a[i];

    rep(i,5) ans[i] = i+1;

    a1 = a;
    a2 = a;
    a3 = a;
    a4 = a;

    swap(a1[0],a1[1]);
    swap(a2[1],a2[2]);
    swap(a3[2],a3[3]);
    swap(a4[3],a4[4]);

    if (a1 == ans || a2 == ans || a3 == ans || a4 == ans) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}