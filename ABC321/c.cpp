#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int k;
    cin >> k;
    int max1 = 9;

    ll ans = 0;

    int max2 = 0;
    for (int a=1; a<=9; a++) rep(b,a) max2++;
    max2 += max1;

    int max3 = 0;
    for (int a=2; a<=9; a++) rep(b,a) rep(c,b) max3++;
    max3 += max2;

    int max4 = 0;
    for (int a=3; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) max4++;
    max4 += max3;

    int max5 = 0;
    for (int a=4; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) rep(e,d) max5++;
    max5 += max4;

    int max6 = 0;
    for (int a=5; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) rep(e,d) max6++;
    max6 += max5;

    int max7 = 0;
    for (int a=6; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) rep(e,d) rep(f,e) max7++;
    max7 += max6;

    int max8 = 0;
    for (int a=7; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) rep(e,d) rep(f,e) rep(g,f) max8++;
    max8 += max7;

    int max9 = 0;
    for (int a=8; a<=9; a++) rep(b,a) rep(c,b) rep(d,c) rep(e,d) rep(f,e) rep(g,f) rep(h,g) max9++;
    max9 += max8;

    int max10 = 1+max9;

    int n;
    if (k <= max1) n = 1;
    else if (k <= max2) n = 2;
    else if (k <= max3) n = 3;
    else if (k <= max4) n = 4;
    else if (k <= max5) n = 5;
    else if (k <= max6) n = 6;
    else if (k <= max7) n = 7;
    else if (k <= max8) n = 8;
    else if (k <= max9) n = 9;
    else if (k <= max10) n = 10;

    

    cout << ans << endl;
return 0;
}