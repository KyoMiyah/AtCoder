#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int x;
    cin >> x;
    if (x >= 90) cout << "expert" << endl;
    else if (70 <= x && x < 90) cout << 90-x << endl;
    else if (40 <= x && x < 70) cout << 70-x << endl;
    else if (0 <= x && x < 40) cout << 40-x << endl;
return 0;
}