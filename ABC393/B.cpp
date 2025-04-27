#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {

string S;
cin >> S;


 int j=0;
int count=0;
int tem=S.size();
rep(i,tem){
 for(j=0; i+j+j<= (S.size()-1);j++){
    if(S[i]=='A'){
      if(S[i+j]=='B'){
       if(S[i+j+j]=='C'){
    count++;
       }
      }
   }
  }
}


cout << count;
  
  return 0;
  

}

