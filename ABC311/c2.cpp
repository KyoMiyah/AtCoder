#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];
    vector<bool> b(n+1);

    int now = 1;
    int first;
    while(1) {
        if (b[now]) {
            first = now;
            break;
        }
        b[now] = true;
        now = a[now];
    }

    while(a[now] != first) {
        cout << a[now] << ' ';
        now = a[now];
    }

return 0;
}