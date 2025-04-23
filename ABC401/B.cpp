#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){

int N;
bool Flag = false;
string S;
int count = 0;
cin >> N ;
for( int i = 0; i < N; i++){
    
    cin >> S;
    if(S == "login"){
        Flag = true;
    }
    else if(S == "logout"){
        Flag = false;
    }
    else if(S == "private" && Flag == false){
        count++;   
    }

}

cout << count << endl;
return 0;
}
