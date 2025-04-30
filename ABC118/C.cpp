#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
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
int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}
int main() {
  

int n;

cin >> n;
//いったん愚直にしてみる．
vector<int> a(n);
rep(i,n){
  cin >> a[i];
}
int ans = 0;
rep(i,n){
  ans = gcd(ans,a[i]);
  
}

cout << ans <<endl;
    return 0;
}