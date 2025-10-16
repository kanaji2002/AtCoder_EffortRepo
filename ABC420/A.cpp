#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int x,y;

cin >> x >> y;
if((x+y)%12 == 0){
  cout << 12 << endl;
  return 0;
} 

cout << (x+y)%12 << endl;
    return 0;




}