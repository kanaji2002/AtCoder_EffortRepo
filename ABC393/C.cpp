#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N >> M;
  int ans = 0;
  map<pair<int, int>, int> m;
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    if (u == v) {
      ans++;
      continue;
    }
    if (u > v) swap(u, v);
    m[{u, v}]++;
  }
  for (auto& [edge, k] : m) ans += k - 1;
  cout << ans << "\n";
}