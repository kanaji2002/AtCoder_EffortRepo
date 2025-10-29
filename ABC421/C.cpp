#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int nextA = 0; // Aの本来の位置を動的に追う

    // 最初の文字で交互パターンを決定
    if (s[0] == 'A') nextA = 0; // Aが偶数番目


    for (int i = 0; i < 2 * n; i++) {
        if (s[i] == 'A') {
            ans += abs(i - nextA);
            nextA += 2; // 次のAは2つ先にあるべき
        }
    }


        // 最初の文字で交互パターンを決定
    if (s[0] == 'B') nextB = 0; // Bが偶数番目
    else nextB = 1;             // Bが奇数番目

    for (int i = 0; i < 2 * n; i++) {
        if (s[i] == 'B') {
            ans += abs(i - nextB);
            nextB += 2; // 次のBは2つ先にあるべき
        }
    }
    ans = min(ansA, ansB);
    
    
    cout << ans << endl;
    return 0;
}
