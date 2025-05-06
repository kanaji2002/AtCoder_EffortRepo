#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int main() {

int N,M;
cin >> N >> M;
vector<string> S(N),T(M);
for(auto& x: S)cin >>x;
for(auto& x: T)cin >> x;

for(int a= 0; a<=N-M; ++a){
  for(int b = 0;b <= N-M; ++b){
    bool ok=true;
    for(int i=0;i<M;++i){
      for(int j=0;j<M;j++){
        if(S[a+i][b+j] != T[i][j]){
          ok = false;
        }
      }
    }
    if(ok){
      cout << a+1 << " " << b+1 <<endl;
    }
  }
}

    return 0;
}
