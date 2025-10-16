#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int x,c;

// 1000m + cm <= X
cin >> x >> c;
int cnt = x/(1000 + c);
int ans = 1000*cnt;
cout << ans << endl;
    return 0;
}