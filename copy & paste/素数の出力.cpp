#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

void sieve_of_eratosthenes(int n) {
    // 素数判定用配列の作成
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0と1は素数ではない

    // エラトステネスの篩
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; // iの倍数を素数から除外
            }
        }
    }

    // 結果の出力
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    sieve_of_eratosthenes(n);

    return 0;
}