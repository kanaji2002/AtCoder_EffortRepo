#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

string S;
cin >> S;

for(char c : S){
  if(c <=90 )
  cout << c ;
}

cout<<endl;
    return 0;
}

