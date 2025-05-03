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
vector<int> mem(10,0);
int n;
cin >> n;
while(n>0){
  mem[n%10]++;
  n/=10;
}

if(mem[1]==1 && mem[2]==2 && mem[3]==3)
cout <<"Yes" <<endl;
else
cout <<"No" <<endl;



    return 0;
}