#include <bits/stdc++.h>
using namespace std;



int main() {
  
  int S[8]={};
  int G[13]={};
  int i,j;
  for(i=0;i<7;i++){
    cin >> S[i];
    G[i]=0;

  }
  int tem=0;
  for(i=0;i<7;i++){
    tem=S[i];
    ++G[tem-1];
  }

//   for(i=0;i<13;i++){
//     cout << G[i] << endl;
//   }
//   for(i=0;i<7;i++){
//     cout << "S" << S[i] <<endl;
//   }



  int a3=0;
  
  for(j=0;j<13;j++){
  
    if(G[j]>=3){
        a3=j;
        for(j=0;j<13;j++){
            
              
            if((a3!=j)&&(G[j]>=2)){
                cout << "Yes";
                return 0;
            
                
                
            }

        }
        
}


        
    }
    cout << "No";


  

return 0;
  
}


