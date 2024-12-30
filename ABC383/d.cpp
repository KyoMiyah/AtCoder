#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

vector<ll> primes;

void sieve_of_eratosthenes(ll n) {
    // 素数判定用配列の作成
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0と1は素数ではない

    // エラトステネスの篩
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false; // iの倍数を素数から除外
            }
        }
    }

    // 結果の出力
    for (int i = 2; i <= 1e7; ++i) {
        if (i >= n) break;
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ll n;
    cin >> n;
    sieve_of_eratosthenes(1e7);

    int ans = 0;

    for(int p1 : primes) {
        for(int p2 : primes) {
            if (p2 >= p1) break;
            if ((ll)p1*p1*p2*p2 > n) break;
            ans++;
        }
    }

    for(int p : primes) {
        ll x = 1;
        rep(i,8) x *= p;
        if (x > n) break;
        ans++;
    }

    cout << ans << endl;
    return 0;
}