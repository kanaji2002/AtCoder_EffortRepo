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

    vector<int> data(n);

    int sum=0;
    rep(i,n){
        cin >> data[i];
        sum += data[i];
    }

    rep(i,n){
        if(sum-data[i] == m){
            cout << "Yes" << endl;
            return 0;
        }
    
    }

    cout << "No" << endl;



    
    return 0;
}