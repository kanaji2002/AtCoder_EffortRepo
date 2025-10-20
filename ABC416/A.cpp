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

string s;

cin >> n >> l >> r;
cin >> s;
int count=0;

for(int i=l-1;i<r;i++){
    if(s[i]=='x'){
        cout << "No"<< endl;
        return 0;
    }


}

cout << "Yes"<< endl;
return 0;
}
