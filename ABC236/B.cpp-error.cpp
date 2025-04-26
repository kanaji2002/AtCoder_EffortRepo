#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
int n;
cin >> n;

vector<int> array(n*4-1);

rep(i,n*4-1){
  cin >> array[i] ;
}
rep(i,n){
    int count_result = count(array.begin(), array.end(), i+1);

    if(count_result==3){
       cout << i+1 << endl;
       break;
    }
   

}


return 0;
}

//countを呼び出し過ぎて，TLE