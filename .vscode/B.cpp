#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)


int main() {
    int n,q;
    cin >> n >> q;
    vector<int>cnt(n+1,0);
    rep(qi,q){
        int x;
        cin >> x;
        if(x==0){
            int l = 1001001001;
            for(int i = 1; i <= n; i++)l = min(l, cnt[i]);
            for(int i = 1; i <= n; i++){
                if(cnt[i] == l){
                    x = i;
                    break;
                }
            }
        }
        
        cnt[x]++;
        cout << x << endl;
    }




    return 0;
}

