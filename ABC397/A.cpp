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
  double X;
  cin >> X ;
  if(X >= 38.0)cout << 1<<endl;
  else if((37.5 <= X) && ( X < 38.0))cout << 2<<endl;
  else cout << 3<<endl;
   

    return 0;
}