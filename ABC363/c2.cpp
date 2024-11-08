#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    sort(s.begin(),s.end());
    do {
        bool hantei = true;
        rep(i,n-k+1) {
            string t = s.substr(i,k);
            string tr = t;
            reverse(tr.begin(),tr.end());
            if (tr == t) hantei = false;
        }
        if (hantei) cnt ++;
    } while (next_permutation(s.begin(),s.end()));
    
    cout << cnt << endl;
return 0;
}