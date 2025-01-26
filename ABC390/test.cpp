#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 結果を格納する集合
    unordered_set<long long> xor_values;

    // 全ての分割方法を列挙（2^N 通り）
    int subsets = 1 << N;
    for (int mask = 0; mask < subsets; ++mask) {
        long long xor_sum = 0;  // グループ A の XOR
        long long group_sum = 0;  // グループ B の合計

        for (int i = 0; i < N; ++i) {
            if (mask & (1 << i)) {
                // グループ A に石を移動
                xor_sum ^= A[i];
            } else {
                // グループ B に石を残す
                group_sum += A[i];
            }
        }

        // グループ B の石を全てグループ A に移動して XOR を計算
        xor_sum ^= group_sum;
        xor_values.insert(xor_sum);
    }

    // 結果の個数を出力
    cout << xor_values.size() << endl;
    return 0;
}