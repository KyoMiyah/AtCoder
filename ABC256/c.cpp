#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    vector<vector<int>> vh1;
    vector<vector<int>> vh2;
    vector<vector<int>> vh3;

    for (int a=1; a<30; a++) for (int b=1; b<30; b++) for (int c=1; c<30; c++) {
        if (a+b+c == h1) vh1.push_back({a,b,c});
    }
    for (int a=1; a<30; a++) for (int b=1; b<30; b++) for (int c=1; c<30; c++) {
        if (a+b+c == h2) vh2.push_back({a,b,c});
    }
    for (int a=1; a<30; a++) for (int b=1; b<30; b++) for (int c=1; c<30; c++) {
        if (a+b+c == h3) vh3.push_back({a,b,c});
    }

    int ans = 0;
    rep(i,vh1.size()) rep(j,vh2.size()) rep(k,vh3.size()) {
        bool ok = true;
        if (vh1[i][0] + vh2[j][0] + vh3[k][0] != w1) ok = false;
        if (vh1[i][1] + vh2[j][1] + vh3[k][1] != w2) ok = false;
        if (vh1[i][2] + vh2[j][2] + vh3[k][2] != w3) ok = false;
        if (ok) ans++;
    }

    cout << ans << endl;
return 0;
}