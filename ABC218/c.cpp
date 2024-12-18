#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)


int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];

//回転なし
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
            if (t[si+i][sj+j] != s[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

//1回転

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

    int left1 = n, right1 = 0, up1 = n, down1 = 0;
    rep(i,n) rep(j,n) {
            if (a1[i][j] == '#') {
                left1 = min(left1,j);
                right1 = max(right1,j);
                up1 = min(up1,i);
                down1 = max(down1,i);
            }
        }
    
    rep(si,n-down1+up1) rep(sj,n-right1+left1) {
        bool ok = true;
        rep(i,down1-up1) rep(j,right1-left1) {
            if (t[si+i][sj+j] != a1[i][j]) ok = false;
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


    int left2 = n, right2 = 0, up2 = n, down2 = 0;
    rep(i,n) rep(j,n) {
            if (a2[i][j] == '#') {
                left2 = min(left2,j);
                right2 = max(right2,j);
                up2 = min(up2,i);
                down2 = max(down2,i);
            }
        }
    
    rep(si,n-down2+up2) rep(sj,n-right2+left2) {
        bool ok = true;
        rep(i,down2-up2) rep(j,right2-left2) {
            if (t[si+i][sj+j] != a2[i][j]) ok = false;
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

    int left3 = n, right3 = 0, up3 = n, down3 = 0;
    rep(i,n) rep(j,n) {
            if (a3[i][j] == '#') {
                left3 = min(left3,j);
                right3 = max(right3,j);
                up3 = min(up3,i);
                down3 = max(down3,i);
            }
        }
    
    rep(si,n-down3+up3) rep(sj,n-right3+left3) {
        bool ok = true;
        rep(i,down3-up3) rep(j,right3-left3) {
            if (t[si+i][sj+j] != a3[i][j]) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
return 0;
}