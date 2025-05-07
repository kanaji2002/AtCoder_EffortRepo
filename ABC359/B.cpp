#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

int n;
int ans=0;
cin >>n;
vector<int> a(2*n);
int cnt =0;
rep(i,2*n){


  cin >> a[i];
 
}
// こういう書き方もある．
// for(auto &v : a) cin >> v;

rep(i,2*n-2){

  if(a[i]==a[i+2]){
    cnt++;
 
}
}

cout << cnt << endl;
    return 0;
}
