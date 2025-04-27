#include <iostream>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
// 鉄則
// https://github.com/E869120/kyopro-tessoku/blob/main/editorial/Editorial_All.pdf
int main() {
    string S;
    cin >> S;
    int ans = 0;
    rep(i, S.size()) {
        if (S[i] == '1') { // ← '1' に修正！！
            ans += 1 << (S.size() - 1 - i);
        }
    }

    cout << ans << endl;
    return 0;
}
