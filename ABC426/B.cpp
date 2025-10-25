#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    string S;

    cin >> S;
    char c = S[0];


    map<char,int> mp;
    for(auto &nx : S){ mp[nx]++; }

    for(auto &nx :mp){
        if(nx.second == 1){
            cout << nx.first << endl;
            return 0;
        }
    }

    // if(S[0]!=S[1]){
    //     if(S[0]!=S[2]){
    //         cout << S[0];
    //     }
    //     else{
    //         cout << S[1];
    //     }
    //     return 0;
    // }

    // else if(S[0]==S[1]){
    //     rep(i,S.size()){
    //         if(c != S[i]){
    //             cout << S[i];
    //             return 0;
    //         }
    //     }
    // }
    
 
    return 0;
}