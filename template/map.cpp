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
  
map<int,char> mp;
int n,q;
cin >> n;
int max = 0;
rep(i,n){
    char tem;
    
    cin >> q >> tem;

    mp[q]= tem;
    if(q > max){
        max = q;
    }
}

// mapは自動でキーが昇順にソートされる，
for(auto p : mp){
    cout << "出力" << p.first << endl;
}

//vectorは，push_back(X)で要素を追加，pop_back()で最後の要素を削除する．


    return 0;
}