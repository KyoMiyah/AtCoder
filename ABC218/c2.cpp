#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)


int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

    int left = n, right = 0, up = n, down = 0;
    rep(i,n) rep(j,n) {
            if (t[i][j] == '#') {
                left = min(left,j);
                right = max(right,j);
                up = min(up,i);
                down = max(down,i);
            }
        }
    
    rep(si,n-down+up) rep(sj,n-right+left) {
        bool ok = true;
        rep(i,down-up) rep(j,right-left) {
            if (s[si+i][sj+j] != t[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

//１回転
    vector<string> a1 = s;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        a1[ni][nj] = s[i][j];
    }

    rep(si,n-down+up) rep(sj,n-right+left) {
        bool ok = true;
        rep(i,down-up) rep(j,right-left) {
            if (a1[si+i][sj+j] != t[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

//２回転
    vector<string> a2 = a1;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        a2[ni][nj] = a1[i][j];
    }

    
    rep(si,n-down+up) rep(sj,n-right+left) {
        bool ok = true;
        rep(i,down-up) rep(j,right-left) {
            if (a2[si+i][sj+j] != t[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

//３回転
    vector<string> a3 = a2;
    rep(i,n) rep(j,n) {
        int ni = i, nj = j;
        int num = min({ni+1, nj+1, n-ni, n-nj});
        rep(k,num) {
            swap(ni,nj);
            nj = n-1-nj;
        }
        a3[ni][nj] = a2[i][j];
    }

    
    rep(si,n-down+up) rep(sj,n-right+left) {
        bool ok = true;
        rep(i,down-up) rep(j,right-left) {
            if (a3[si+i][sj+j] != t[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
return 0;
}