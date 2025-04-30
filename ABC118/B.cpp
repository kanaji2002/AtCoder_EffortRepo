#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;
int A[31][31];
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> N >> M;
    rep(i, N) {
        int k; cin >> k;
        rep(j,k) {
            int a; cin >> a;
            a--;
 
            A[i][a] = 1;
        }
    }
 
    int ans = 0;
    rep(i,M) {
        int cnt = 0;
        rep(j,N){
        if (0 == A[j][i]) cnt++;
        }
        if (cnt == N) ans++;
    }
    cout << ans << endl;
    
    
    return 0;
}