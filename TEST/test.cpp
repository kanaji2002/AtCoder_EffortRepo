#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using ll = long long;

int main() {int bit = 5;      // 5 → 101（二進数）
int i = 1;
if (bit & (1 << i)) {
    cout << "i番目のビットは立ってる！" << endl;
}
else {
    cout << "i番目のビットは立ってない！" << endl;
}
  
    return 0;
}
