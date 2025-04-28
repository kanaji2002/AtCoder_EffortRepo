#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

int N,Q;
cin >> N >> Q;
int ans=0;
vector<int> cnt(N+1,1);
cnt[0]=0;
vector<int> pos(N+1);
for(int i=0;i<=N; i++){
  pos[i]=i;
}

rep(i,Q){
  int type;
  
cin >> type;
if(type==1){
    int P,H;
    cin >> P >> H;

    if(cnt[pos[P]]==2){
      --ans;
    }
    --cnt[pos[P]];
    pos[P]=H;
    cnt[pos[P]]+=1;
    if(cnt[pos[P]]==2){
      ans++;
    }


}else {
  cout << ans << endl;
}

}



return 0;
}