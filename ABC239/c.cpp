#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int midx = (x1+x2)/2;
    int midy = (y1+y2)/2;

    for (int x = midx-5; x <= midx+5; x++) for (int y = midy-5; y <= midy+5; y++) {
        bool ok1 = false, ok2 = false;
        if ((abs(x-x1) == 2 && abs(y-y1) == 1) || (abs(x-x1) == 1 && abs(y-y1) == 2)) ok1 = true;
        if ((abs(x-x2) == 2 && abs(y-y2) == 1) || (abs(x-x2) == 1 && abs(y-y2) == 2)) ok2 = true;
        if (ok1 == true && ok2 == true) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
return 0;
}