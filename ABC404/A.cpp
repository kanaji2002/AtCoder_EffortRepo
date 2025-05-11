#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int main() {
  
  // int N,K;
  // cin >> N;
  // vector<int> a(N);
  
  string S;
  cin >> S;
  bool found = false;
rep(j,26){
  found = false;
  for(int i=0; i<S.size();i++){
    char c=S[i];
        if(int(c)==97+j){
        found = true;
        break;
      }
    }
  if(found == false){
    cout << (char)(97+j) << endl;
    return 0;
  }
  j++;
 
}

return 0;
a#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int main() {
  
  // int N,K;
  // cin >> N;
  // vector<int> a(N);
  
  string S;
  cin >> S;
  bool found = false;
  int j=0;
rep(j,26){
  found = false;
  for(int i=0; i<S.size();i++){
    char c=S[i];
        if(int(c)==97+j){
        found = true;
        break;
      }
    }
  if(found == false){
    cout << (char)(97+j) << endl;
    return 0;
  }

 
}

return 0;

}


}

