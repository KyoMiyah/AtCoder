#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    n--;

    for (int keta=1; ; keta++) {
        int l = (keta+1)/2;
        ll num = 9;
        rep(i,l-1) num *= 10;
        if (num < n) {
            n -= num;
            continue;
        }

        n += num/9 -1;
        string s = to_string(n);
        string ss = s;
        reverse(ss.begin(),ss.end());
        if (keta % 2 == 1) s.pop_back();
        s += ss;
        cout << s << endl;
        return 0;
    }
return 0;
}