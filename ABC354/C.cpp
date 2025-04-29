#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

int n;
cin >> n;
vector<int> a(n),c(n);
rep(i,n) cin >> a[i] >> c[i];

//index用の配列
//これを後に並び替える．
vector<int> is(n);
rep(i,n)is[i] =i;

sort(is.begin(),is.end(), [&](int i, int j){
  return a[i] > a[j];
});

vector<int> ans;
for(int i: is){
  if(ans.size() == 0 || c[ans.back()] > c[i]){
    ans.push_back(i);
  }
}
sort(ans.begin(), ans.end());
cout << ans.size() << endl;
for(int i : ans) cout << i+1 << ' ';
cout << endl;

  
    return 0;
}
