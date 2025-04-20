#include <bits/stdc++.h>
using namespace std;

// Fenwick Tree (BIT)
class FenwickTree {
    vector<int> tree;
    int size;

public:
    FenwickTree(int n) : size(n), tree(n + 2, 0) {}

    void add(int i, int x) {
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
    }

    int sum(int i) {
        int res = 0;
        while (i > 0) {
            res += tree[i];
            i -= i & -i;
        }
        return res;
    }

    int range_sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> chords(M);

    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);  // A < B に正規化
        chords[i] = {a, b};
    }

    // A をキーにソート
    sort(chords.begin(), chords.end());

    FenwickTree bit(N);
    long long ans = 0;

    for (auto [a, b] : chords) {
        // 今までに追加された弦で b より小さいBの数 = bit.sum(b)
        // bより大きいBの数が交差してる
        ans += bit.range_sum(b + 1, N);
        bit.add(b, 1);
    }

    cout << ans << endl;
    return 0;
}