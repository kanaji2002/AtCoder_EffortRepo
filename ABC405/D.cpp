#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
// 累積和を作る
vector<long long> build_prefix_sum(const vector<long long >& a) {
    long long n = a.size();
    vector<long long > s(n + 1, 0); // s[0] = 0 で初期化
    for (long long i = 0; i < n; ++i) {
        s[i + 1] = s[i] + a[i];
    }
    return s;
}

// 区間 [i, j] の和を求める
long long sum_range(vector<long long >& prefix, long long i, long long j) {
    return prefix[j + 1] - prefix[i];
}
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
const string dc = "^<v>";

int main() {

int h,w;
cin >> h >> w;
vector<string> s(h);
rep(i,h)cin >> s[i];

const int INF = 1e9;

vector<vector<int>> dist(h, vector<int>(w, INF));
using P = pair<int,int>;
queue<P> q;
rep(i,h)rep(j,w){
  if(s[i][j] == 'E'){
    dist[i][j] = 0;
    q.emplace(i,j);
  }
}

while(q.size()){
  auto [i,j] = q.front(); q.pop();
  rep(v,4){
    int ni = i+di[v], nj = j+dj[v];
    if(ni < 0 || nj <0 || ni >= h || nj >= w)continue;
    if(s[ni][nj] == '#')continue;
    if(dist[ni][nj] != INF)continue;
    dist[ni][nj] = dist[i][j]+1;
    q.emplace(ni,nj);
    s[ni][nj] = dc[v^2];
  }
}

rep(i,h){
  cout << s[i] <<endl;
}

    return 0;
}

