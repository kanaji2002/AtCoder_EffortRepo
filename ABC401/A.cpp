#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){
  // 100 以上 
  // 999 以下の整数 
  // S が与えられます。
  
  // S が 
  // 200 以上 
  // 299 以下のとき Success 、そうでないとき Failure と出力してください。
  
  // 制約
int N,R;
cin >> N ;

if(200 <=N && N <=299)
cout << "Success" << endl;
else
cout << "Failure" << endl;
return 0;
}
