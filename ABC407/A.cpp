#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>  
#include <set>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;


int main() {
  
double a,b;
cin >> a >> b;

// int tem1 = (int)a/b, tem2= (int)(a/b)+1;

// double ans = a/b;

// if(double(tem1)-ans < ans - double(tem2)){
//     cout << tem2 << endl;
// }
// else{
//     cout << tem1 << endl;

// }

cout << round(a/b) << endl;


    return 0;
}