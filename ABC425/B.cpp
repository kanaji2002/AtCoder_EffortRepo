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
cin >> n;
vector<int>a(n);
rep(i,n){
    cin >> a[i];
}

set<int>st;

for(int i=1; i<=n; i++)st.insert(i);


    rep(i,n){
        if(a[i]!= -1)st.erase(a[i]);
    }
    rep(i,n){
        if(a[i]== -1){
            a[i]=*st.begin();
            st.erase(st.begin());
            
            }
        }

    rep(i,n){
        if(st.size() > 0){
            cout << "No" << endl; 
            return 0;
        }
    }
    cout << "Yes" << endl;
    rep(j,n){
        cout << a[j] << " ";
    }
   cout << endl;

    return 0;
}