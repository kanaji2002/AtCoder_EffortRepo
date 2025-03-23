#include <bits/stdc++.h>

using namespace std;



int main() {
int i,N,a;
cin >> N;
int tem=0;
for(i=0;i<N;i++){
    
    cin >> a;
    if(tem < a){
        tem = a;
        continue;
    }
    
    else{
        cout << "No";
        return 0;
    }
    
}
cout << "Yes";


return 0;
  
}


