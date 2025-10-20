#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

int n,m;
cin >> n >> m;
int tem;
int cnt = 0;

rep(i,n){
    cin >> tem;
    cnt += tem;
}

if(cnt <= m){
    cout << "Yes"<< endl;

}

else{
    cout << "No"<< endl;
}

return 0;
}
