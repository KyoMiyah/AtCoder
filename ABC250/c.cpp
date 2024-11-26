#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> ball(n+1), pos(n+1);
    rep(i,n) {
        ball[i+1] = i+1;
        pos[i+1] = i+1;
    }
    rep(i,q) {
        int x;
        cin >> x;
        if (x != n) {
            int posnow = ball[x];
            int posnext = posnow;
            posnext++;
            int ballnow = pos[posnow];
            int ballnext = pos[posnext];
            swap(ball[posnow], ball[posnext]);
            swap(pos[ballnow], pos[ballnext]);
        }
        else {
            int posnow2 = ball[x];
            int posnext2 = posnow2;
            posnext2--;
            int ballnow2 = pos[posnow2];
            int ballnext2 = pos[posnext2];
            swap(ball[posnow2],ball[posnext2]);
            swap(pos[ballnow2], pos[ballnext2]);
        }
    }

    rep(i,n) cout << ball[i+1] << ' ';
    cout << endl;
return 0;
}