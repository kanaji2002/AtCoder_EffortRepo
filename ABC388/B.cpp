#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

int n,d;
cin >> n >> d;
vector<int> t(n);
vector<int> l(n);

rep(i,n){
  cin >> t[i] >> l[i];
}


for(int i=1; i<=d; ++i){
  int max=0;
  rep(j,n){
    if(max < t[j]*(l[j]+i))max = t[j]*(l[j]+i);
  }
 
  cout << max <<endl;
}
    return 0;
}

