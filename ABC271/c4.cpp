#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
   sort(a.begin(), a.end());
    map<int,int> to;
    rep(i,n) {
        to[a[i]]++;
    }
    vector<int> b;
    int cnt = 0;
        for (auto it = to.rbegin(); it != to.rend(); ++it) {
        cnt += it->second -1;
        b.push_back(it->first);
    }
    rep(i,cnt) b.push_back(1e9);

    sort(b.begin(), b.end());
    int ok = 0, ng = 1e6;
    set<int> book;
    rep(i,n) book.insert(a[i]);
    while(ok + 1 != ng) {
        int mid = (ok+ng)/2;
        int small = 0, big = 0;
        rep(i,n) {
            if (a[i] <= mid && book.count(a[i])==0) small++;
            else if (a[i] > mid && book.count(a[i])==1) big++;
        }
        if (small *2 <= big) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
return 0;
}