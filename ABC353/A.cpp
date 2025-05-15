#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)


int main(void){
  
  int n,ans=0;
  cin >> n;
  vector<int> a(n);
  rep(i,n){
    
    cin >> a[i];
  }
  ans = a[0];
  for(int i=1;i<n;++i){
    if(ans < a[i]){
      cout << i+1 << endl;
      return 0;
    }
  }
  
      cout << -1 << endl;
  
  

    return 0;
}

