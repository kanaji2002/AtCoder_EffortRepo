#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;

//int は10桁（+2*10^9まで．-2,147,483,648 ～ 2,147,483,647
// long long は19桁
//---------------------------------------------------------------------------------------------------
//個人ルール
//変数定義+入力と，処理，出力は行を分ける．
//cでもc++でも


int main() {
  
    int n,m;
    cin >> n >> m;
    int ans = 0;
    dsu uf(n);
    rep(i,m){
      int a,b;
      cin >> a >> b;
      a--; b--;
      if(uf.same(a,b)){
        ans++;
        continue;
      
      }  uf.merge(a,b);
    }
   cout << ans << endl; 

    return 0;
}