#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {
ll org = 0;
ll H=0;
// 2^0 -> 2^1 -> 2^2
cin >> H;
int i=0;
while(1){
  org += (1LL<<i);
  if(H < org){
  cout << i+1 << endl;
  //問題文の見落とし．
  //伸びるのはi日目の晩，身長測定は次の日の朝
  return 0;
  }else{
    ++i;
   
  }
}
  
    return 0;
}
