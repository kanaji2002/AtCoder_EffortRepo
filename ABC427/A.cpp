#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>


using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    string s;

    cin >> s;

    int tem = s.size();

    // cout << s[(tem+1)/2-1] << endl;
    rep(i,s.size()){
        if(i != (tem+1)/2-1){
            cout << s[i];
        }
    }


    return 0;
}

