#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

int n;
cin >> n ;
int tem1,tem2;
int cnt = 0;


rep(i,n){
    cin >> tem1 >> tem2;
    if(tem1 < tem2){
        cnt++;
    }
}

cout << cnt << endl;


return 0;
}
