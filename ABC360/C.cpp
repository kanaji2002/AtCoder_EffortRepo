#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)

int main() {
//大事なのは，重複しているところの数がⅠになるまで，wの数を，--する．
//入力の時に，最小を，空いている所に格納，新しくでてきたら，格納した所と比較？

    int N;
    cin >> N;
    vector<int> a(N) , w(N); // 0-indexed
    vector<int> max_weight(N);
    rep(i,N){
      cin >> a[i];
    }
    rep(i,N){
      cin >> w[i];
    }
  //箱の中に荷物が一つだったとしても，それが最大値．それに気づかなかった．
  
    rep(i,N){
      a[i]--;
      //a[i]-1がw[i]のインデックスになるので，a[i-1]とw[i]はセットで動く．
      max_weight[a[i]] = max(max_weight[a[i]],w[i]);
    }
    
  //引数の3桁目は，初期値．ふつうはぜろ　
   const int sum_w = accumulate(w.begin(),w.end(),0);
   const int sum_max = accumulate(max_weight.begin(),max_weight.end(),0);
   cout << sum_w - sum_max;
      

   
  
    return 0;
}
