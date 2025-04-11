#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)  // i=0から！

int main() {
    vector<int> A(4);
    rep(i, 4) {
        cin >> A[i];
    }

    int ans = 0;
    set<int> checked;

    for (int i = 0; i < 4; i++) {
        int val = A[i];
        if (checked.count(val)) continue;

        int cnt = count(A.begin(), A.end(), val);
        ans += cnt / 2;  // 2個で1回の操作

        checked.insert(val);
    }

    cout << ans << endl;

    return 0;
}
