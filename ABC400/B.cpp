#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){

ll N;
int M;
cin >> N >> M ;
ll A=1;
ll sumN=1;
rep(i,M){
  A*=N;
 sumN=sumN+A;
 if(sumN>1000000000){
 cout << "inf" << endl;
 return 0;
 }
}


cout << sumN << endl;




return 0;
}
