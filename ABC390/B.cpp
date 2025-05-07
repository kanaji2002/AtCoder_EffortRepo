#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {
int n;

cin >> n;
vector<long long> a(n);
rep(i,n){
  cin >> a[i];
}

for(int i=0;i<n-2;i++){
  if(a[i]*a[i+2]!=a[i+1]*a[i+1]){
    cout << "No" <<endl;
    return 0;
  }
}
cout << "Yes" <<endl;
    return 0;
}

