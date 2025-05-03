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
int N;
cin >> N;
vector<vector<char>> S(N, vector<char>(N, 0));
vector<vector<char>> T(N, vector<char>(N, 0));

rep(i,N){
 rep(j,N){
   char tem;
   cin >> tem ;
  S[i][j] = tem;
 }
}

rep(i,N){
 rep(j,N){
   char tem;
   cin >> tem ;
  T[i][j] = tem;
 }
}

//方針は，まず回転させて，どれが誤差が一番小さいか．+誤差数

// vector<vector<char>> tem(N, vector<char>(N, 0));
// rep(i,N){
//   rep(j,N){
//   tem[]
//   }
// }

int count0 = 0,count1=0,count2=0,count3=0;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(T[i][j] != S[i][j])count0++;
    }
  }


  /* 90度回転 */
  /* 行数と列数が入れ替わる */
  // printf("回転角度：90度\n");
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(T[i][j] != S[N - 1 - j][i])count1++;
    }
  }


  /* 180度回転 */
  // printf("回転角度：180度\n");
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(T[i][j] != S[N - 1 - i][N - 1 - j])count2++;
    }
    
  }


  /* 270度回転 */
  /* 行数と列数が入れ替わる */
  // printf("回転角度：270度\n");

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
     if(T[i][j] != S[j][N - 1 - i])count3++;
    }
  }

int count =0;
int temc = min(min(count0, count1+1), min(count2+2, count3+3));
if(count0 == temc){
  count = temc;
cout << count <<endl;
return 0;
}else if(count1+1 == temc){
count = temc;
cout << count <<endl;
return 0;
}else if(count2+2 == temc){
  count = temc;
cout << count <<endl;
return 0;
}else if(count3+3 == temc){
count = temc;
cout << count <<endl;
return 0;
}




//Tを表示させてみただけ．
// rep(i,N){
// rep(j,N){
// cout << T[i][j];
// }
// cout << endl;
// }



    return 0;
}
