#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<ll,ll>;

int main() {
    int q;
    cin >> q;
    vector<P> snake;
    int cnt = 0;
    snake.push_back({0, 0});

    rep(i,q) {
        int x;
        cin >> x;
        if (x == 1) {
            ll y;
            cin >> y;
            ll last2 = snake.back().second;
            snake.push_back({last2, last2 + y});
        }
        if (x == 2) {
            cnt++;
        }
        if (x == 3) {
            int k;
            cin >> k;
            k--;
            ll ans = snake[cnt + k + 1].first - snake[cnt + 1].first;
            cout << ans << endl;
        }
    }

return 0;
}