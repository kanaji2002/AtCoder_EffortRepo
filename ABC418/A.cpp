#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int a,b,c;

string s;

cin >> a >> b >> c;
cint >> s;

rep(i,s.size()){
    if(i < b-1){
        continue;
    }
    else if(b-1 <= i && i < c-1){
        cout << s[i];
    }
    else{
        return 0;
    }

    return 0;
}
