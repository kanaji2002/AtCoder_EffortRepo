#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

    int q;
    cin >> q;
    vector<int> x = {0};



    rep(qi,q){
        int tyepe;
        cin >> tyepe;
        if(tyepe == 1){
            char c;
            cin >> c;
            int nx = x.back() + (c == '(' ? 1: -1);
            if(nx < 0) nx = -1e9;
            x.push_back(nx);
        }else{
            x.pop_back();
        }
        if(x.back() == 0){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
    }

    // int n;
    // cin >> n;
    // int j=0;
    // bool flag = true;
    // map<int,char> mp;

    // int count = 0;
    // rep(i,n){
    //     int tem;
    //     cin >>tem;
    //     char c;
    //     count = 0;
       


    //    if(tem == 1){
    //     cin >> c;
    //     if(c == '('){
    //         count++;
    //         mp[j++] = c;

    //     }
    //     else if(c == ')'){
    //         count--;
    //         mp[j++] = c;
    //    }
    // }
    //    else if(tem == 2){
    //     count--;
    //     mp.erase(j-1);
    //     j--;
    //     if(count < 0){
    //         flag = false;
    //     }
    //    }

    //    if(count == 0 && flag == true){
    //     cout << "Yes" << endl;
    //    }
    //    else {
    //     cout << "No" << endl;
        
    //    }
      
    // }



return 0;

}
