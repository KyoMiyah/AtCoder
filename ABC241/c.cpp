#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    bool ans = false;

    //横の判定
    rep(i,n) for (int j=0; j<n-5; j++) {
        int cnt = 0;
        rep(k,6) if (s[i][j+k] == '#') cnt++;
        if (cnt >= 4) ans = true;
    }

    //縦の判定
     rep(j,n) for (int i=0; i<n-5; i++) {
        int cnt = 0;
        rep(k,6) if (s[i+k][j] == '#') cnt++;
        if (cnt >= 4) ans = true;
    }

    //右ななめ上の判定 
      for (int i=5; i<n; i++) for (int j=0; j<n-5; j++) {
        int cnt = 0;
        rep(k,6) if (s[i-k][j+k] == '#') cnt++;
        if (cnt >= 4) ans = true;        
      }

    //右ななめ下の判定 
      for (int i=0; i<n-5; i++) for (int j=0; j<n-5; j++) {
        int cnt = 0;
        rep(k,6) if (s[i+k][j+k] == '#') cnt++;
        if (cnt >= 4) ans = true;        
      }
      if (ans) cout << "Yes" << endl;
      else cout << "No" << endl;
return 0;
}