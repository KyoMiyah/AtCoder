#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    int n = s.size();
    vector<int> cnt(n);
    rep(i,n) cnt[i] = i;

    int nn = 0;
    set<string> list;
    vector<string> list2;

    do{ 
            string ans;
            rep(i,n) ans += s[cnt[i]];
            if(!list.count(ans)) {
                list.insert(ans);
                list2.push_back(ans);
            }
    }while(next_permutation(cnt.begin(),cnt.end()));

    sort(list2.begin(), list2.end());
    cout << list2[k-1] << endl;

return 0;
}