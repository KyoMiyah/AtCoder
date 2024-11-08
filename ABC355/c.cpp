#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> row(n);
    vector<int> col(n);
    int diag1 = 0;
    int diag2 = 0;
    int turn = 0;
    rep(i,t) {
        turn++;
        int a;
        cin >> a;
        int r = (a-1)/n;
        int c = (a-1)%n;

        row[r]++; col[c]++;
        if (r==c) diag1++;
        if (r+c == n-1) diag2++;

        rep(i,n) if (row[i] == n || col[i] == n || diag1 == n || diag2 == n) {
            cout << turn << endl;
            return 0;
        }
    }

    cout << -1 << endl;
return 0;
}