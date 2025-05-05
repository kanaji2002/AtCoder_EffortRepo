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
string O;
if(S[0]=='N'){
  O+='S';
  if(S[1]=='E')O+='W';
  else if(S[1]=='W')O+='E';
}
else if(S[0]=='S'){
    O+='N';
  if(S[1]=='E')O+='W';
  else if(S[1]=='W')O+='E';
}
else if(S[0]=='W'){
  O+='E';
}
else if(S[0]=='E'){
O+='W';
}
cout << O << endl;;

    return 0;
}
