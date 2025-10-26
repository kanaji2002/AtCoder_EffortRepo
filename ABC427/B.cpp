#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>


using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)



int func2(string s) {
   
    int ans = 0;
     if(s == "0"){
        ans =1;
        return ans;
    }

   rep(i,s.size()){
       ans += s[i]-'0';
    }
    return ans;
}


int main() {

    int n;

    cin >> n;
    
    

    vector<int> a(n+1);
    a[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            a[i] += func2(to_string(a[j]));
        }
    }

    cout << a[n] << endl;




    return 0;
}

