#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>  
#include <set>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;


int main() {
  
    int n;
    char c1,c2;
    cin >> n >> c1 >> c2;
    string s;
    cin >> s;
    string s_ans = "";

    rep(i,n){
        if(s[i] != c1){
            s_ans += c2;
        }
        else{
            s_ans += s[i];
        }
    }

    cout << s_ans << endl;

    return 0;
}