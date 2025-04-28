#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {
//宣言だけ
map<pair<int, int>, bool> m;

int N,M,Q;
cin >> N >> M >> Q;
vector<bool> allvec(N+1);
//必要なマップを初期化しておく
// rep(i,N){
//   rep(j,M){
//     m[{i+1,j+1}]=false;
//   }
// }

//学んだこと
//N,M,Qが2*10^5で，repをQ回，回している時点で，その中に，repは作れない．
//作ると，TLEになる．

//クエリの入力をQ回
rep(i,Q){
  int a=0,b=0,c=0;
  cin >> a;
  if(a==1){
      cin >> b >> c;
  m[{b,c}]=true;
  }
  //指定した人に，フルアクセスけん
  else if(a==2){
      cin >> b;
      allvec[b]=true;
  }
  else if(a==3){
  cin >> b >> c;
  if((m[{b,c}]==true)||allvec[b]==true)
  cout << "Yes" << endl;
  else
  cout << "No" << endl;
  }
}


return 0;
}