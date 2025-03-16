#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N;
    cin >> N;
    const auto &res = prime_factorize(N);
    vector<ll> a;
    a.push_back(1);
    for (auto p : res) {
        for (int i = 0; i < p.second; ++i) a.push_back(p.first);
    }

    for (ll x=0; x < (1<<a.size()); x++) {
        ll x1 = 1, x2 = 1;
        rep(nx,a.size()) {
        if (x>>nx&1) x1 *= a[nx];
        else x2 *= a[nx];
        }
        
    }
    cout << -1 << endl;
}
