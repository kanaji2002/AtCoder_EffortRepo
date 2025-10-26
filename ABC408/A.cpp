#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
#include <set>
using namespace std;
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)


int main() {
    int n,s;

    cin >> n >> s;
// 0秒からの比較ができていなかった．そのため，配列を1つ大きく取る．

    vector<int> a(n+1,0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i]-a[i-1] > s){
            cout << "No" << endl;
            return 0;
    }
}


    cout << "Yes" << endl;

    return 0;
}

