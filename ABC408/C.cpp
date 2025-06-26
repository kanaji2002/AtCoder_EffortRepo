#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)


int main() {
    int n,m;
    cin >> n >> m;
    vector<int> imos(n+1,0);
    rep(i,m){
        int l,r;
        cin >> l >> r;
    
        imos[l-1]++;
        imos[r]--;
    }
    
    for(int i=1; i<=n; i++){
        imos[i] += imos[i-1];
    }

    int ans = 1e9;
    for(int i=0; i<n; i++){
        //何個除去すれば良いのか，という情報が，階段の数で把握できるのが面白い．
        ans = min(ans,imos[i]);

    }
    cout << ans << endl;



    return 0;
}

