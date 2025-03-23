#include <bits/stdc++.h>

using namespace std;



int main() {
stack <int> A;
int Q;
cin >> Q;
int i,q;
for(i=0;i<100;i++){

 A.push(0);
}

for(i=0;i<Q;i++){
    cin >> q;
    int x=0;
    if(q==1){
    cin >> x;
    A.push(x);
    
    }
    else{
        cout << A.top() << endl;
        A.pop();
    }
}

return 0;
  
}


