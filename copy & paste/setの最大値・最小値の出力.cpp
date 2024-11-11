#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    set<int> reach;
    cout << (*reach.rbegin()) << endl; //最大値の出力
    cout << (*reach.begin()) << endl; //最小値の出力
return 0;
}