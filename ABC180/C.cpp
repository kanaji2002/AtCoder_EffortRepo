#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
ll n;
cin >>n;
set<ll> s;
for(ll x = 1; x*x <=n; ++x){
  if(n%x != 0)continue;
  s.insert(x);
  s.insert(n/x);
  
}
for(ll x : s){
  cout << x << endl;
}
    return 0;
}
