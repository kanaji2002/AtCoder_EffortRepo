#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>


using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string,int> mp;
    for(int i=0;i < n-k+1; i++){
        string tem = s.substr(i,k);
        mp[tem]++;
    }

    int max = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if(it->second > max){
            max = it->second;
        }
    }


    cout << max << endl;


    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if(it->second == max){
            cout << it->first << endl;
         
        }
    }





    return 0;
}

