#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

vector<string> rotate90(const vector<string>& grid) {
    vector<string> rotated(N, string(N, '.'));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            rotated[j][N - 1 - i] = grid[i][j];
    return rotated;
}


int count_diff(const vector<string>& A, const vector<string>& B) {
    int diff = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (A[i][j] != B[i][j])
                ++diff;
    return diff;
}

int main() {
    cin >> N;
    vector<string> S(N), T(N);
    for (int i = 0; i < N; ++i) cin >> S[i];
    for (int i = 0; i < N; ++i) cin >> T[i];

    int min_ops = 1e9;
    vector<string> rotated = S;

    for (int rot = 0; rot < 4; ++rot) {
        int diff = count_diff(rotated, T);
        min_ops = min(min_ops, diff + rot); 
        rotated = rotate90(rotated);
    }

    cout << min_ops << endl;
    return 0;
}