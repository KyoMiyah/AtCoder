#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<P> xy(n);
    rep(i,n) {
        cin >> xy[i].first >> xy[i].second;
    }
    string s;
    cin >> s;

    map<int,vector<int>> to;
    rep(i,n) {
        to[xy[i].second].push_back(i);
    }

    rep(i,to.size()) {
        vector<int> left, right;
        for (int value : to[i]) {
        if (s[value] == 'R') right.push_back(xy[value].first);
        else left.push_back(xy[value].first);
        }
        if (right.size() == 0 || left.size() == 0) continue;
        sort(right.begin(), right.end());
        sort(left.rbegin(), left.rend());
            if (right[0] < left[0]) {
                cout << "Yes" << endl;
                return 0;
        }
    }
    cout << "No" << endl;
return 0;
}