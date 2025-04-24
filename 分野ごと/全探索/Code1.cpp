#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;
// https://atcoder.jp/contests/abc198/tasks/abc198_d

// 文字列を数字に変換（文字 -> 数字のマッピング付き）
long long str_to_num(const string& s, const unordered_map<char, int>& mp) {
    long long val = 0;
    for (char c : s) {
        val = val * 10 + mp.at(c);
    }
    return val;
}

int main() {
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    set<char> unique_chars;
    for (char c : S1 + S2 + S3) unique_chars.insert(c);


    setZ<char> unique_chars;
    for(char c: S1 + S2 + S3) unique_chars.insert(c);

    // 文字数が10以上なら無理
    if (unique_chars.size() > 10) {
        cout << "UNSOLVABLE" << endl;
        return 0;
    }

    // 文字のリストを作る
    vector<char> chars(unique_chars.begin(), unique_chars.end());
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 10P(chars.size()) の順列を試す
    do {
        unordered_map<char, int> mp;
        for (int i = 0; i < chars.size(); ++i) {
            mp[chars[i]] = digits[i];
        }

        // 先頭が0ならダメ
        if (mp[S1[0]] == 0 || mp[S2[0]] == 0 || mp[S3[0]] == 0) continue;

        long long N1 = str_to_num(S1, mp);
        long long N2 = str_to_num(S2, mp);
        long long N3 = str_to_num(S3, mp);

        if (N1 + N2 == N3) {
            cout << N1 << endl;
            cout << N2 << endl;
            cout << N3 << endl;
            return 0;
        }
    } while (next_permutation(digits.begin(), digits.end()));

    cout << "UNSOLVABLE" << endl;
    return 0;
}
