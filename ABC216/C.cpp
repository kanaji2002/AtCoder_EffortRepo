#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(long long i=a; i<b; i++)
int A, B; string S;
//---------------------------------------------------------------------------------------------------
#define yes "Yes"
#define no "No"

//---------------------------------------------------------------------------------------------------
int main() {
ll n;
cin >> n;
string ans;
while(n){
 if(n&1){
  ans+= 'A';
  n--;
}else{
  ans += 'B';
  n/=2;
}
}
reverse(ans.begin(),ans.end());

cout << ans << endl;
return 0;

}
