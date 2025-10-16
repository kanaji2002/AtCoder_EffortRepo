#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    map<string, int> mp;
    mp["Ocelot"]=1;
    mp["Serval"]=2;
    mp["Lynx"]=3;
    string x,y;
    cin >> x >> y;
    if(mp[x] >= mp[y])
    cout << "Yes" << endl;
    else
    cout << "No" << endl;

    return 0;
}