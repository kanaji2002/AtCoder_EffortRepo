#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(long unsigned int i=0; i<n; i++)
int main() {
string U,T;
cin >> T >> U;
long unsigned int size = U.size();
int temsize=0;
int j=0;
rep(i,T.size()){
    if((U[0]==T[i])||(T[i]=='?')){
      long unsigned int count = 0;
      rep(j,U.size()){
        if((U[j]==T[i+j])||(T[i+j]=='?')){
          count++;
       if(count==U.size()){
         cout << "Yes";
         return 0;
       }
      
      }
    }
    } 
}

 cout << "No";
     

return 0;
}