#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
  // vector<string> S;
  string S;
  cin >> S;
  if(S[0]=='R')
  cout << "Yes";
  else if((S[0]=='S')&&(S[1]=='R'))
  cout << "Yes";
  else
  cout << "No";
    return 0;
}
