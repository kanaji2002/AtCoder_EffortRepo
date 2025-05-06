#include <iostream>
#include <vector>
using namespace std;


int main() {
  
    int a,b,c,d,e,f,g,h,i,j,k,l;

    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;
   
   if((a<g)&&(g<d)&&(b<h)&&
   //練習で消したり付け足したりしてます．
   cout << "Yes";
   return 0;
   }
   else if((a<j)&&(j<d)&&(b<k)&&(k<e)&&(c<l)&&(l<f)){
   cout << "Yes";
   return 0;
   }
   else if((g<a)&&(h<b)&&(i<c)&&(d<j)&&(e<k)&&(f<l)){
   cout << "Yes";
   return 0;
   }
   
  
  cout << "No";

    return 0;
}
