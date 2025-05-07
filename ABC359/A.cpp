#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

int n;
int ans=0;
cin >>n;
string tem;
rep(i,n){
  cin >> tem;
  if(tem=="Takahashi")
  ans++;
}



cout << ans << endl;
    return 0;
}
