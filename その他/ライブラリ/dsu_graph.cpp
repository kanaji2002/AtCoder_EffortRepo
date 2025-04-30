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
  
    int n,q;
    cin >> n >> q;
    dsu uf(n);
    rep(i,q){
      int p;
      cin >> p;
      int a,b;
      cin >> a >> b;
      if(p==0){
        uf.merge(a,b);
      }
      else{
        if(uf.same(a,b)){
          cout << "Yes" <<endl;
        }else{
          cout << "No" <<endl;
        }
      }
      
    }
    

    return 0;
}