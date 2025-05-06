#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
    int n;
    cin >> n; // 入力が抜けていた
    vector<int> a(n);
    map<int, int> count; // 変数名がtypo

    rep(i, n) {
        cin >> a[i];
        count[a[i]]++;
    }

    int ans = -1;
    int max_val = -1;

    rep(i, n) {
        if (count[a[i]] >= 2) continue; // 出現回数が2回以下なら候補
        if (max_val < a[i]) {
            max_val = a[i];
            ans = i + 1; // 1-indexed で出力
        }
    }

    cout << ans << endl;
    return 0;
}
