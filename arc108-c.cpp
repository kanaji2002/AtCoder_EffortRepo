#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

int s, p;
cin >> s >> p;

//n,nは，Xとおける．
//代入すると，(s-m)m=P
//または，(s-n)n=P
//つまり(s-x)x=P 対象性より．
rep(i,1001001){
  if(i*(s-i)==p){
    cout << ("Yes");
    return 0;
  }
}
 cout << ("No");

    return 0;
}
