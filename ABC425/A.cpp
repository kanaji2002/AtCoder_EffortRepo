#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>  

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<=n; ++i)
int N, M;


int main() {
  
 int n;
 cin >> n;
long long sum = 0;
 rep(i,n){
    long long sign = (i % 2 == 0) ? 1 : -1;
    sum += sign * i * i * i;
 }

 cout << sum << endl;

    return 0;
}