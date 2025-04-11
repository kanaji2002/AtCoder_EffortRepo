#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using ll = long long;

int main() {
  vector<string> S(12);
  int ans=0;
  int byte_size=0;
  rep(i,12){
    cin >> S[i];
    byte_size = S[i].size();
    if(byte_size == i+1)
    ans++;
  }
  
  cout << ans << endl;
  
  
    return 0;
}
