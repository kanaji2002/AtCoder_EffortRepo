#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(n+1,0);
    rep(i,k){
      int tem1,tem2;
      cin >> tem1 >> tem2;
      v[tem1]++;
     if(v[tem1]==m)cout << tem1 << endl;
     }
     
     
}
