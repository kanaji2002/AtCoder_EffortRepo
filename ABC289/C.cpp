#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int n,m;
cin >> n >> m;
vector<vector<int>> data(m);

rep(i,m){
    int c;
    cin >> c;
    data[i].resize(c);
    for(auto& x: data[i]){
        cin >> x;
    }
}

int ans = 0;


for(int b = 0; b < (1<< m); b++){
    set<int>s;
    for(int j = 0; j< m; j++){
        if((b>>j) & 1){for(auto& x: data[j])s.insert(x);
    }
}

    ans += (int)s.size() == n;
}

cout << ans << endl;


    return 0;
}
