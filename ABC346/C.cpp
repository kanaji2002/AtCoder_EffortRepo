#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {


ll N,K;
cin >> N >> K;
set<ll> s;
ll ans = K*(K+1)/2;

rep(i,N){
  ll a;
  cin >> a;
     // 値の追加（重複は無視される）
  s.insert(a);
 
}
for(auto x : s){
  if(x<=K)
   ans -= x;
}

cout << ans << endl;


return 0;
}