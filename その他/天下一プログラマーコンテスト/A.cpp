#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)

int main() {

    ll N, M;
    cin >> N >> M;
    vector<ll> a(N); // 0-indexed
    vector<ll> b(M);

    rep(i, N)cin >> a[i];
    rep(i, M)cin >> b[i];

    rep(i,N-1){
      a[i+1]=min(a[i+1],a[i]);
    }
    rep(j,M){
      int i = lower_bound(a.begin(),a.end(),b[j],greater<int>())-a.begin();
      if(i == N) cout << -1 << endl;
      else cout << i+1 <<endl;
    }
    return 0;
}
