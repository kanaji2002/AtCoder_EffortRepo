#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int n,m;
cin >> n >> m;
vector<vector<int>> to(n+1);

rep(i,m){
  int a,b;
  cin >> a >> b;
  to[a].push_back(b);
  to[b].push_back(a);
}

for(int i=1; i<=n; i++){
  sort(to[i].begin(),to[i].end());
  cout << to[i].size();
  for(int v : to[i]){
    cout << ' ' << v;
  }
  cout << endl;

}
    return 0;
}
