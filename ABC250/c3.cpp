#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> ball(n), pos(n);
    rep(i,n) {
        ball[i] = i;
        pos[i] = i;
    }
    rep(i,q) {
        int x;
        cin >> x;
        x--;
            int posnow = pos[x];
            int posnext = posnow;
            if (posnow != n-1) posnext++;
            else posnext--;
            int ballnext = ball[posnext];
            int ballnow = ball[posnow];
            swap(ball[posnow], ball[posnext]);
            swap(pos[ballnow], pos[ballnext]);
    }

    rep(i,n) cout << ball[i]+1 << ' ';
    cout << endl;
return 0;
}