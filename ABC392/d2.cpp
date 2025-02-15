#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

int main() {
    int n;
    cin >> n;

    vector<map<int, double>> per(n);
    vector<set<int>> face(n);

    rep(i,n) {
        int k;
        cin >> k;
        rep(j,k) {
            int a;
            cin >> a;
            per[i][a] += 1.0 / k;
            face[i].insert(a);
        }
    }

    double maxans = 0;

    rep(i,n) {
        rep(j,i) {
            double prob = 0;
            for (int val : face[i]) {
                if (face[j].count(val)) {
                    prob += per[i][val] * per[j][val];
                }
            }
            maxans = max(maxans, prob);
        }
    }

    printf("%.9f\n", maxans);
    return 0;
}