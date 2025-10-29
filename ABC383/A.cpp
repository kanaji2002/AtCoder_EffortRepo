#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>  
#include <set>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;


int main() {
  
    int n;

    int ans =0;
    map<int,pair<int,int>> mp;
    int tem;

    cin >> n;

    cin >> mp[0].first >> mp[0].second;
    ans += mp[0].second;
   for(int i = 1; i<n; i++){
        
        cin >> mp[i].first >> mp[i].second;
        ans -= (mp[i].first - mp[i-1].first);
        
        if(ans <0){ans =0;}
        ans += mp[i].second;

    }


    cout << ans << endl;


    return 0;
}