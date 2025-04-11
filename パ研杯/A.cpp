#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){

int N;
cin >> N;
vector<int> A(N);

rep(i,N){
  cin >> A[i];
}

// reverse(A.begin(),A.end()); // 降順：4, 3, 1
sort(std::rbegin(A), std::rend(A));

// rep(i,N){
//   cout << A[i] <<endl;
// }
cout << A[3]-A[4] << endl;



return 0;
}
