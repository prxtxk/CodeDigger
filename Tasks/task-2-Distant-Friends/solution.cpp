#include <bits/stdc++.h>
using namespace std;
#define int long long
class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};
signed main() {
     ios_base::sync_with_stdio(false); 
     cin.tie(NULL);
     cout.tie(NULL);
     int t=1;
     while(t--){
    int N, K, R;
    cin >> N >> K >> R;
    vector<pair<pair<int, int>, pair<int, int>>> drs(R);
    for (int i = 0; i < R; i++) {
        int r, c, r_, c_;
        cin >> r >> c >> r_ >> c_;
        drs[i] = {{r, c}, {r_, c_}};
    }
    vector<pair<int, int>> fd(K);
    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        fd[i] = {r, c};
    }
    int tot = N * N;
    DSU dsu(tot);
    set<pair<pair<int, int>, pair<int, int>>> ds;
    for (auto &i : drs) {
        int r1 = i.first.first - 1, c1 = i.first.second - 1;
        int r2 = i.second.first - 1, c2 = i.second.second - 1;
        ds.insert({{r1, c1}, {r2, c2}});
        ds.insert({{r2, c2}, {r1, c1}});
    }
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (c + 1 < N) {
                int nr = r, nc = c + 1;
                if (ds.find({{r, c}, {nr, nc}}) == ds.end()) {
                    dsu.unite(r * N + c, nr * N + nc);
                 }
                }
            if (r + 1 < N) {
                int nr = r + 1, nc = c;
                if (ds.find({{r, c}, {nr, nc}}) == ds.end()) {
                    dsu.unite(r * N + c, nr * N + nc);
                 }
                }
             if (c - 1 >= 0) {
                int nr = r, nc = c - 1;
                if (ds.find({{r, c}, {nr, nc}}) == ds.end()) {
                    dsu.unite(r * N + c, nr * N + nc);
                 }
                }
            if (r - 1 >= 0) {
                int nr = r - 1, nc = c;
                if (ds.find({{r, c}, {nr, nc}}) == ds.end()) {
                    dsu.unite(r * N + c, nr * N + nc);
                 }
                }
        }
    }
    map<int, int> m;
    for (auto &i : fd) {
        int r = i.first - 1;
        int c = i.second - 1;
        int tem = dsu.find(r*N + c);
        m[tem]++;
    }
    int KK = K * (K - 1) / 2;
    int ans = 0;
    for (auto &i : m) {
        ans += i.second * (i.second - 1) / 2;
    }
    cout<< KK - ans<<endl;
     }
    return 0;
}
