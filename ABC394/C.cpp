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

string S;
cin >> S;
for(int i=S.size()-2; i >= 0; i--){
  if((S[i]=='W') && (S[i+1] == 'A'))
  S[i]='A';
  S[i+1]='C';
}

  cout << S <<endl;

    return 0;
}
