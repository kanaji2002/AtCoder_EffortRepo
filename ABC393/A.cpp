#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
// int n;
// cin >> n;
// cin >> a >> b;
// vector<int> a(n);
string S1,S2;
cin >> S1 >> S2;

  if(S1=="sick"){
    
    if(S2=="sick")
    cout << 1;
    
    else
    cout << 2;
    
  }
  
  else if(S2=="sick")
  cout << 3;
  else 
  cout << 4;
  
  return 0;
  

}

