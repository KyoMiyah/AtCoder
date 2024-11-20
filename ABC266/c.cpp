#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

bool hantei (int ax, int ay, int bx, int by, int cx, int cy) {
    double lab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
    double lbc = sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by));
    double naiseki = (bx-ax)*(bx-cx)+(by-ay)*(by-cy);
    double sinb = naiseki/(lab*lbc);
    return sinb > 0;
}

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

    double lab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
    double lbc = sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by));
    double naiseki = (bx-ax)*(bx-cx)+(by-ay)*(by-cy);
    double sinb = naiseki/(lab*lbc);

    cout << lab << ' ' << lbc << ' ' << naiseki << ' ' << sinb << endl;


    if (hantei(ax, ay, bx, by, cx, cy) && hantei(bx, by, cx, cy, dx, dy) && hantei(cx, cy, dx, dy, ax, ay) && hantei(dx, dy, ax, ay, bx, by)) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}