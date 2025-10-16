#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int n,x;
string y;
string s;
vector<string> v;
cin >> n;
rep(i,n){
    cin >> s;
    v.push_back(s);
}


cin >> x >> y;
if(v.at(x-1) == y){
    cout << "Yes" << endl;
}
else{
    cout << "No" << endl;
}
    return 0;


}