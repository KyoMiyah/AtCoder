#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;



int main() {
    vector<vector<int>> c(3,vector<int> (3));
    rep(i,3) rep(j,3) cin >> c[i][j];
    vector<int> a = {0,1,2,3,4,5,6,7,8};

auto hantei = [&] (int x, int y, int z) {
    if (x%3 != y%3 || x%3 != z%3 || y%3 != z%3) return false;
    if (c[x] == c[y] && c[x] != c[z]) return true;
    return false;
};

auto hantei1 = [&] (int x, int y, int z) {
    if (x/3 != y/3 || x/3 != z/3 || y/3 != z/3) return false;
    if (c[x] == c[y] && c[x] != c[z]) return true;
    return false;
};

auto hantei2 = [&] (int x, int y, int z) {
    if (x%4 != 0 || y%4 != 0 || z%4 != 0) return false;
    if (c[x] == c[y] && c[x] != c[z]) return true;
    return false;
};

auto hantei3 = [&] (int x, int y, int z) {
    if (!(x%2 == 0 && x%8 != 0) || !(y%2 == 0 && y%8 != 0) || !(z%2 == 0 && z%8 != 0)) return false;
    if (c[x] == c[y] && c[x] != c[z]) return true;
    return false;
};

    double cnt = 0;
    do {
        bool ans = false;
        rep(i,7) {
            if (hantei(a[i],a[i+1],a[i+2])) ans = true;
            if (hantei1(a[i],a[i+1],a[i+2])) ans = true;
            if (hantei2(a[i],a[i+1],a[i+2])) ans = true;
            if (hantei3(a[i],a[i+1],a[i+2])) ans = true;
        }
        if (ans) cnt++;
    } while (next_permutation(a.begin(),a.end()));

    double tot = 1;
    for (int i=1; i<=9; i++) tot *= i;

    double ans2 = 1.0 - cnt/tot;

    printf("%.8f",ans2);

return 0;
}