#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
int n;
cin >> n;


vector<int> count(n+1);

rep(i,n*4-1){
  int a;
  cin >> a;
  count[a]++;
}

for(int i=1;i<=n;i++){
  if(count[i]==3)
  cout << i << endl;
}


return 0;
}
