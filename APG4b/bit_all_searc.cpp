#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int main() {
  
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  for(int i=0; i < 20; i++){
    cin >> A[i];
  }
  
  bool ans = false;
  
  for(int tem =0 ; tem < (1<<20); tem++){
    bitset<20> s(tem);
    
    int sum = 0;
    
    rep(i,N){
      if(s.test(i))sum += A[i];
    }
    
    if(sum == K)ans =true;
    
  }
  
  if(ans)cout << "Yes" <<endl;
  else cout << "No" <<endl;
 
}

