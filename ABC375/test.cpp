#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    vector<int> a = {1,2,3,4};
    a.pop_back();
    rep(i,a.size()) cout << a[i] << ' ';
    cout << endl;
return 0;
}