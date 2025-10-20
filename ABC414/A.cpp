#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    int n,l,r;
    int teml,temr;
    int count=0;

    cin >> n >> l >> r;
    rep(i,n){
        cin >> teml >> temr;
        if(teml <= l && r <= temr){
            count++;
        }
    }

    cout << count << endl;

return 0;
}
