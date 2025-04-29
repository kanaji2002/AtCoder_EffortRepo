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
int a,b,c,k,s,t;
cin >> a >> b >> c >> k >> s >> t;

int sum=a*s+b*t;
if((s+t)>= k)
sum-=(s+t)*c;

cout << sum <<endl;



return 0;
}
