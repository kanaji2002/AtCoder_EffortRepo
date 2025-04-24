#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){

int N,K;
cin >> N >> K;
int S=0;
int A[N+1];


for(int i=0; i<=N; i++){
  
  if(i<K){
    A[i]=1;
    S += A[i];
  }
  else{
    //A[i]にこれまでのwindow KのSUMを代
    A[i] = S;
    // 
    S += A[i];
    S -= A[i - K];
  }
    S %= 1000000000;
    if (S < 0) S += 1000000000;
  
}

cout << A[N] << endl;
return 0;

}


