#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000000;

int main() {
    int n, k, X;
    cin >> n >> k >> X;
    int tem;
    
    for (int i = 1; i <= n; i++) {
      cin >> tem;
      cout << tem << endl;
      if(i==k){
      cout << X <<endl;
      
      }
      
    }


    return 0;
}
