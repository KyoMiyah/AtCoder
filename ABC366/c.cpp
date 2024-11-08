#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int q;
    cin >> q;
    vector<P> box;
    rep(i,q) {
        int a;
        cin >> a;
        if (a == 3) {
            int cnt = 0;
            rep(i,box.size()) if (box[i].second != 0) cnt ++;
            cout << cnt << endl;
        }
        if (a == 1) {
            int x;
            cin >> x;
            box[x].second++;
        }
         if (a == 2) {
            int x;
            cin >> x;
            box[x].second--;
        }       
    }
return 0;
}