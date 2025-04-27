#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main() {
int N;
cin >> N;
vector<int> a(N);
int sum=0;
rep(i,N){
  cin >>a[i];
  if(i%2==0)
  sum+=a[i];
}
cout << sum <<endl;

return 0;
}