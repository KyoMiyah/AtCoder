#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // 1 の位置を収集
    vector<int> positions;
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            positions.push_back(i);
        }
    }

    // 中央値を基準にコストを計算
    int m = positions.size();
    int median_index = positions[m / 2];
    long long cost = 0;

    for (int i = 0; i < m; i++) {
        cost += abs(positions[i] - (median_index + i - m / 2));
    }

    cout << cost << endl;
    return 0;
}