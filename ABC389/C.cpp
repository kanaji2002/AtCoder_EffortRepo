#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

int q;
cin >> q;
//now は追加する長さ
long long now = 0;
vector<long long> x;
int id = 0;
for(int i=0; i<q; i++){
  int t;
  cin >>t;
  if(t == 1){
    long long l;
    cin >> l;
    //xには累積和が順に格納されている．
    x.push_back(now);
    //nowは累積和
    now +=l;
  }else if(t==2){
    //idは，現在何番目を参照しているか=最初が消えた．
    id++;
  }else{
    int k;
    cin >> k;
    k--;
    cout << x[id+k]-x[id] <<endl;
    
  }
}


    return 0;
}

