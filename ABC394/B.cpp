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
int N;
cin >> N;
vector<string> S(N);
rep(i,N){

  cin >> S[i];
  
}

sort(S.begin(),S.end(),[](string s1,string s2){
  return s1.size() < s2.size();
});

string S0 = "";
rep(i,N){
  S0 += S[i];
}

cout << S0;
    return 0;
}
