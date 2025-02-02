#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, W, Q;
    cin >> N >> W;

    vector<int> X(N), Y(N);
    vector<pair<int, int>> blocks;
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        blocks.emplace_back(Y[i], X[i]); // Yを優先してソートするため
    }

    // 高さが低い順に処理
    sort(blocks.begin(), blocks.end());

    // 各列の現在のブロックの一番上の位置を管理
    unordered_map<int, ll> column; // X座標ごとに最大Yを記録
    for (auto [y, x] : blocks) {
        if (column.count(x)) {
            // その列の一番上のブロックのY座標より下に落ちる
            column[x] = min(column[x] - 1, (ll)y);
        } else {
            column[x] = y;
        }
    }

    // すべての列の最小値を取得（これが消滅ライン）
    ll minY = LLONG_MAX;
    for (auto [x, y] : column) {
        minY = min(minY, y);
    }

    // クエリ処理
    cin >> Q;
    vector<int> A(Q);
    vector<ll> T(Q);
    for (int i = 0; i < Q; i++) {
        cin >> A[i] >> T[i];
    }

    // 各クエリに対してブロックの生存確認
    for (int i = 0; i < Q; i++) {
        int a = A[i] - 1; // 0-based index
        ll t = T[i];

        // ブロックが消滅しているか確認
        if (Y[a] - t <= minY) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }

    return 0;
}