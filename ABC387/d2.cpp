#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    set<P> reach1, reach2;
    vector<vector<int>> abc(h,vector<int> (w));
    int si, sj, gi, gj;
    rep(i,h) rep(j,w) {
        if (s[i][j] == 'S') {
        si = i;
        sj = j;
        }
        if (s[i][j] == 'G') {
        gi = i;
        gj = j;
        }
        if (s[i][j] == '#') {
            reach1.insert({i,j});
            reach2.insert({i,j});
            abc[i][j] = 1e9;
        }
    }

    queue<P> q1, q2;
    q1.push({si,sj}); reach1.insert({si,sj});
    q2.push({si,sj}); reach2.insert({si,sj});

    int t = 0;
    int ans = 1e9, cnt1 = 1, cnt2 = 1;
    while(!q1.empty()) {
        P v = q1.front(); q1.pop();
        if (v.first == gi && v.second == gj) break;
        if (t%2 == 0) {
            if (v.first - 1 >= 0) {
                if (!reach1.count({v.first-1,v.second})) {
                q1.push({v.first-1,v.second}); reach1.insert({v.first-1,v.second});
                abc[v.first-1][v.second] = cnt1;
                }
            }
            if (v.first + 1 < h) {
                if (!reach1.count({v.first+1,v.second})) {
                q1.push({v.first+1,v.second}); reach1.insert({v.first+1,v.second});
                abc[v.first+1][v.second] = cnt1;
                }
            }
        } 
        if (t%2 == 1) {
            if (v.second - 1 >= 0) {
                if (!reach1.count({v.first,v.second-1})) {
                q1.push({v.first,v.second-1}); reach1.insert({v.first,v.second-1});
                abc[v.first][v.second-1] = cnt1;
                }
            }
            if (v.first + 1 < w) {
                if (!reach1.count({v.first,v.second+1})) {
                q1.push({v.first,v.second+1}); reach1.insert({v.first,v.second+1});
                abc[v.first][v.second+1] = cnt1;
                }
            }
        }
        cnt1++;
        t++;
    }

    int u = 1;
    while(!q2.empty()) {
        P v = q2.front(); q2.pop();
        if (v.first == gi && v.second == gj) break;
        if (u%2 == 0) {
            if (v.first - 1 >= 0) {
                if (!reach2.count({v.first-1,v.second})) {
                q2.push({v.first-1,v.second}); reach2.insert({v.first-1,v.second});
                abc[v.first-1][v.second] = cnt2;
                }
            }
            if (v.first + 1 < h) {
                if (!reach2.count({v.first+1,v.second})) {
                q2.push({v.first+1,v.second}); reach2.insert({v.first+1,v.second});
                abc[v.first+1][v.second] = cnt2;
                }
            }
        } 
        if (u%2 == 1) {
            if (v.second - 1 >= 0) {
                if (!reach2.count({v.first,v.second-1})) {
                q2.push({v.first,v.second-1}); reach2.insert({v.first,v.second-1});
                abc[v.first][v.second-1] = cnt2;
                }
            }
            if (v.first + 1 < w) {
                if (!reach2.count({v.first,v.second+1})) {
                q2.push({v.first,v.second+1}); reach2.insert({v.first,v.second+1});
                abc[v.first][v.second+1] = cnt2;
                }
            }
        }
        cnt2++;
        u++;
    }

    ans = min(ans,cnt1);
    ans = min(ans,cnt2);

    cout << ans << endl;
return 0;
}