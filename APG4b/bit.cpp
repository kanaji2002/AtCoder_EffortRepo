#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int main() {
  bitset<8> a("00011011");
  bitset<4> b("0011");
  bitset<4> C;
  C.set(3,1);

  cout << C <<endl;
  
    

    if(C.test(3)){
      cout << "3 Yes" << endl;
    }
    else 
    cout << "no" <<endl;

 
}

