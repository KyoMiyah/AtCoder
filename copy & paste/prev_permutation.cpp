#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    prev_permutation(p.begin(), p.end());
    rep(i,n) cout << p[i] << endl;
return 0;
}

//n>100の時の別解がABC276のc問題で出ています。