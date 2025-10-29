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
  
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    int ans =0;

    rep(i,s.size()){
        if(s[i] == '.')
        ans ++;
    }

    cout << ans + d << endl;

    return 0;
}