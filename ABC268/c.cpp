#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(2*n);
    rep(i,n) cin >> p[i];

    for (int i=n; i<2*n; i++) p[i] = p[i-n];

    int goodmax = 0;
    rep(si,n) {
        int good = 0;
        rep(i,n) if (p[si+i] == (i-1)%n || p[si+i] == i%n || p[si+i] == (i+1)%n) good++;
        goodmax = max(goodmax,good);
    }
    cout << goodmax << endl;
return 0;
}