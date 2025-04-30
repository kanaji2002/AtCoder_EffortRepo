#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

// int a,b,c,d,e;
// cin >> a >> b >> c >> d >> e;

vector<int> Time(5);
vector<int> nextTime(5);

rep(i,5){
  cin >> Time[i];
  nextTime[i]=((Time[i]+9)/10*10);
}

int BestTime = 9999999;

//iは最後に注文する料理のindex
rep(i,5){
  int SumTime = 0;
  
  //jは今処理している料理のindex
  rep(j,5){
    if(i==j){
      SumTime += Time[i];
    }
    else{
      SumTime += nextTime[j];
    }
    
  }
  BestTime = min(BestTime, SumTime);
  
}

cout << BestTime <<endl;


    return 0;
}
