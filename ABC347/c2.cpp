#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> d(n);
    rep(i,n) {
        cin >> d[i];
        d[i] %= (a+b);
    }

    rep(i,n) d.push_back(d[i]+a+b);
    sort(d.begin(),d.end());

    rep(i,n){
     if (d[i+n-1]-d[i]+1 <= a)  {
        cout << "Yes" << endl;
        return 0;
        }  
    }
    cout << "No" << endl;
return 0;
}