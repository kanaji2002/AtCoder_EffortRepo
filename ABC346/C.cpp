#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

int n,k;
cin >> n >> k;
set<int> st;
rep(i,n){
  int a;
  cin >> a;
  if(a<=k)st.insert(a);
  
}

ll ans = (ll)k*(k+1)/2;
for(int i: st)ans -= i;
cout << ans <<end;



return 0;
}