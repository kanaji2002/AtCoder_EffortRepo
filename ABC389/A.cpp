#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

string S;
cin >> S;


int ans = (S[0]-'0')*(S[2]-'0');
cout << ans <<endl;

    return 0;
}