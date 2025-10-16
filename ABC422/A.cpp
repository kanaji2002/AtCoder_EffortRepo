#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {
int s1,s2;
string s;

cin >> s;
s1 = s[0] - '0';
s2 = s[2] - '0';
if(s2 ==8){
    s1++;
    s2=1;
}

else{
    s2++;
 
}


cout << s1 << "-" << s2 << endl;
    return 0;

}