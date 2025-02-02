#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string d;
    cin >> d;
    if (d == "N") cout << 'S' << endl;
    if (d == "NW") cout << "SE" << endl;
    if (d == "W") cout << 'E' << endl;
    if (d == "SW") cout << "NE" << endl;
    if (d == "S") cout << 'N' << endl;
    if (d == "SE") cout << "NW" << endl;
    if (d == "E") cout << 'W' << endl;
    if (d == "NE") cout << "SW" << endl;
return 0;
}