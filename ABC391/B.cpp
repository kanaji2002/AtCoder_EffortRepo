// x1,y1,z1,x2,y2,z2 = map(int,input().split())
// x3,y3,z3,x4,y4,z4 = map(int,input().split())
// def f(l1,r1,l2,r2):
//   # [l1,r1] と [l2,r2] の共通部分の長さが正ならTrue
//   return not (r1<=l2 or r2<=l1)
// if f(x1,x2,x3,x4) and f(y1,y2,y3,y4) and f(z1,z2,z3,z4):
//   print("Yes")
// else:
//   print("No")

#include <iostream>
#include <vector>
using namespace std;


int tem(int l1,int r1,int l2,int r2){
  // [l1,r1] と [l2,r2] の共通部分の長さが正ならTrue
  return not (r1<=l2 or r2<=l1);
}


int main() {
  
    int a,b,c,d,e,f,g,h,i,j,k,l;

    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;
   
if(tem(a,d,g,j) && tem(b,e,h,k) && tem(c,f,i,l)){
   cout << "Yes";
 return 0;
   }
   
  
  cout << "No";

    return 0;
}


