#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
vector<int> ans={1,2,3,4,5};
vector<int> a(5);
vector<int> b(5);

int tem=0;
// for(auto &x : b)cin >> x;
rep(i,5)cin >> b[i];
// for(auto &v : a) cin >> v;
// rep(i,5){
// cout << b[i] <<endl;
// }

rep(i,4){

  a=b;
  swap(a[i],a[i+1]);
  if(ans==a){ 
    cout << "Yes" << endl;
    return 0;
  }
  
}

cout << "No" <<endl;

    return 0;
}

