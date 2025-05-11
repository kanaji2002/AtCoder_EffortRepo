#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
int ans=0;
int n,m;
cin >>n >>m;
vector<int> a(n);
set<int> s;

   
rep(i,n){
  int tem;
  cin >> tem;
   // 要素の追加
    s.insert(tem);
    int count =0;
    if(s.size()==m){
      ans=(n-i);
      cout << ans;
      return 0;
    }
    
}
cout << ans;


    return 0;
}

