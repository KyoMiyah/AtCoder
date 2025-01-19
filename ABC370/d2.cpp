#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
//ABC 370 D

int main() {
    int h, w, q;
    cin >> h >> w >> q;
    
    vector<set<int>> rowset, colset;
    rep(i,h) rep(j,w) {
        rowset[i].insert(j);
        colset[j].insert(i);
    }

    auto erase = [&] (int i, int j) {
        rowset[i].erase(j);
        colset[j].erase(i);
    }; 

    rep(qi,q) {
        int r, c;
        cin >> r >> c;
        r--; c--;

        {
            auto& st = rowset[r];
            auto it = st.lower_bound(c);
            if (*it == c) {
                erase(r,c);
                continue;
            }
            else {
                if (it != st.end()) erase(r,*it);
                it = st.lower_bound(c);
                if (it != st.begin()) it--, erase(r,*it); 
            }
        }

        {
            auto& st = colset[c];
            auto it = st.lower_bound(r);
                if (it != st.end()) erase(*it,c);
                it = st.lower_bound(r);
                if (it != st.begin()) it--, erase(*it,c); 
        }
    }

    int ans = 0;
    rep(i,h) ans += rowset[i].size();
    cout << ans << endl;

return 0;
}