#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

// int a,b,c,d,e;
// cin >> a >> b >> c >> d >> e;

//方針
//文字列でもらって，0-s.sizeまでアクセスする．
//int digit = s[i] - '0'で数字に変換
//

string s;
cin >> s ;
int tem = 0;
int ans = 99999999;
// cout << "s.size()は，" << s.size() <<endl;
for(int i=0; i < s.size()-2; i++){
  int digit100 = s[i] - '0';
  int digit10 = s[i+1] - '0';
  int digit1 = s[i+2] - '0';
  
  // cout << "digit =" << digit << endl;
  tem = (digit100*100 + digit10*10 + digit1);
  ans = min(ans, abs(tem-753));
}

cout << ans << endl;
    return 0;
}


//模範回答
//わざわざintに変換する必要はない.

// string S;
// //---------------------------------------------------------------------------------------------------
// void _main() {
//     cin >> S;
//     int ans = inf;
//     int n = S.length();
//     rep(i, 0, n - 2) {
//         int x = (S[i] - '0') * 100 + (S[i + 1] - '0') * 10 + S[i + 2] - '0';
//         chmin(ans, abs(x - 753));
//     }
//     cout << ans << endl;
// }