#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {
    int n;
    cin >> n;
    vector<string> s={"#"};
    rep(ni,n){
      int m = s.size(), m3=m*3;
      vector<string> t(m3, string(m3,'.'));
      rep(i,m3)rep(j,m3) t[i][j] = s[i%m][j%m];
      rep(i,m)rep(j,m)t[m+i][m+j] = '.';
      s=t;
      
//       毎回「3倍コピー」する

// その後、中央m×mを「.」にする

// 「.」の中にもさらに模様が細かくできていく！

// だんだん「自己相似」「フラクタルっぽい」模様になる！

      
    }
          rep(i,s.size())cout << s[i] << endl;
    return 0;
}
