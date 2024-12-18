#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    string abc = "abcdefghijklmnopqrstuvwxyz";

    int n = s.size();
    vector<int> cnt(n);
    rep(i,n) rep(j,26) {
        if (s[i] == abc[j]) cnt[i] = j;
    } 

    int nn = 0;
    set<string> list;

    do{ 
            string ans;
            rep(i,n) ans += s[cnt[i]];
            list.insert(ans);
    }while(next_permutation(cnt.begin(),cnt.end()));

    rep(i,list.size()) cout << list[i] << endl;
    //cout << list[k-1] << endl;

return 0;
}