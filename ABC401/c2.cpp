#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1'000'000'000;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N + 1, 0);
    long long sum = 0;

    for (int i = 0; i <= N; ++i) {
        if (i < K) {
            A[i] = 1;
            sum = (sum + A[i]) % MOD;
        } else {
            A[i] = sum;
            sum = (sum + A[i] - A[i - K] + MOD) % MOD;
        }
    }

    cout << A[N] << endl;
    return 0;
}