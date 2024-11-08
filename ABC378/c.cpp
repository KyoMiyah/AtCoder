#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<P> s;
    rep(i,n) {
        int a;
        cin >> a;
        if (s.size() == 0) {
            cout << -1 << ' ';
            s.emplace_back(a,i+1);
            continue;
        }
        int small = -1, big = s.size();
        while(big > small + 1) {
            int mid = (small+big)/2;
            if(s[mid].first <= a) mid = small;
            else mid = big;
        }
        if (s[small].first == a) {
            cout << s[small].second << ' ';
            s[small].second = i+1;
        }
        else s.insert(s.begin()+small, make_pair(a,i+1));
        cout << -1 << ' ';
    }
    cout << endl;
return 0;
}