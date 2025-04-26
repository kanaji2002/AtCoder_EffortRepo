#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
  

int n,k;
cin >> n >> k ;
vector<int> a(n);
rep(i,n){
  cin >> a[i];
}
sort(a.begin(),a.end());
int ans=1e9;

rep(l,k+1){
  int r = l+(n-k)-1;
  int now=a[r]-a[l];
  ans = min(ans,now);
}
cout << ans << endl;
    return 0;
}
