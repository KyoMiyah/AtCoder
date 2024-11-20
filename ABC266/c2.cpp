#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

bool hantei (int ax, int ay, int bx, int by, int cx, int cy) {
    double gaiseki = (bx-ax)*(by-cy) - (bx-cx)*(by-ay);
    return gaiseki > 0;
}

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;


    if (hantei(ax, ay, bx, by, cx, cy) && hantei(bx, by, cx, cy, dx, dy) && hantei(cx, cy, dx, dy, ax, ay) && hantei(dx, dy, ax, ay, bx, by)) cout << "Yes" << endl;
    else if (!hantei(ax, ay, bx, by, cx, cy) && !hantei(bx, by, cx, cy, dx, dy) && !hantei(cx, cy, dx, dy, ax, ay) && !hantei(dx, dy, ax, ay, bx, by)) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}