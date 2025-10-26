#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
#include <set>
using namespace std;
using namespace std;
#include <cmath> // pow を使うため

#define rep(i,n) for(int i=0; i<n; i++)


int main() {
map<int,int> mp;    
int jadge = 0;
    
rep(i,4){
    int tem;
    cin >> tem;
    mp[tem]++;
}

// 下記のforの中で，探索する範囲を0~12にしていた．間違い．
for(int i=1;i<=13;i++){
    if(mp[i]==3){
        cout << "Yes" << endl;
        return 0;
    }

    if(mp[i]==2){
        if(jadge==1){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            jadge=1;
        }
    }
}

cout << "No" << endl;

    

}