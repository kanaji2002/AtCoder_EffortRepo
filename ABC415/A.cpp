#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int n;
cin >> n;
vector<int> A(n);


for(auto &nx : A){
    cin >> nx;
}

int x;
cin >> x;

rep(i,n){
    if(A[i]==x){
        cout << "Yes"<< endl;
        return 0;
    }
    
}


cout << "No"<< endl;

return 0;
}
