#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

    int n,l,r;
    cin >> n >> l >> r;
    int tem =r;

    for(int i=1; i<=n; i++){
        if(i < l)cout << i << " ";
        else if(l <= i && i <= r){
            cout << tem << " ";
            tem--;
        }
        else if(i > r)cout << i << " ";
    }
    return 0;
}
