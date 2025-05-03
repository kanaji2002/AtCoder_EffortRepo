#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
    int N, M;
    cin >> N >> M;

    dsu uf(N);
    bool ok = true;
    vector<vector<int>> G(N);  // 隣接リスト

    if (N != M) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        uf.merge(u - 1, v - 1);  // Union-Find
        --u; --v;  // 0-indexed に揃える
        G[u].push_back(v);
        G[v].push_back(u);  // 無向グラフなので両方に追加
    }

    // 各頂点の次数が2か確認
    for (int i = 0; i < N; i++) {
        if (G[i].size() != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 連結成分が1つかどうか
    if (uf.groups().size() != 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
