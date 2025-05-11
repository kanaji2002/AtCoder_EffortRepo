#include <iostream>
#include <vector>
#include <map>
#include <set>
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


int main() {
long long n=0;
cin >> n;
vector<long long> a(n);
vector<long long> sum(n);
rep(i,n){
  cin >> a[i];
}

auto prefix = build_prefix_sum(a);
long long ans = 0;
rep(i,n-1){
  // cout << sum_range(prefix, i+1, n-1) <<endl;
  ans += a[i]*sum_range(prefix, i+1, n-1);
}
cout << ans << endl;

    return 0;
}

