#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;


int main() {
    int m;
    cin >> m;
    vector<int> a;
    
    int t = 0;
    while(m>0) {
        while (m%3 > 0) {
            a.push_back(t);
            m--;
        }
        m /= 3;
        t++;
    }

    cout << a.size() << endl;
    rep(i,a.size()) cout << a[i] << ' ';
    cout << endl;

return 0;
}