#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)


int main() {

   int n,q;
    cin >> n >> q;
    vector<int> cnt(n+1);
        for(int i=1; i<=n; i++){
            cnt[i] = 1;
        }
  
    int r = 0;

    rep(i,q){
        int x,y;
        cin >> x >> y;
        // pos から，xまで0にして，mp[y]にそれまでの総数を足す．

        int ans = 0;
        while(r <=x){
            ans += cnt[r];
            cnt[r] = 0;
            r++;

        }
        cnt[y] += ans;
        cout << ans << endl;
    }
        


    
 
    return 0;
}