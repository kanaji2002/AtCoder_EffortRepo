#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int N, M;

//int は10桁（+2*10^9まで．-2,147,483,648 ～ 2,147,483,647
// long long は19桁
//---------------------------------------------------------------------------------------------------
//個人ルール
//変数定義+入力と，処理，出力は行を分ける．
//cでもc++でも

bool SortFunc(pair<int,int> x, pair<int,int> y){
  // 昇順だったら，trueを返す
  return x.second < y.second;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> p;
    int a, b;
    rep(i, n) {
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    // // b の値（= second）でソート
    // sort(p.begin(), p.end(), [](pair<int, int> x, pair<int, int> y) {
    //     return x.second < y.second;
    // });
    //三つ目は，関数を指定するだけだから()はいらない．
    sort(p.begin(),p.end(), SortFunc);

    for (pair<int, int> t : p) {
        int x, y;
        tie(x, y) = t;
        cout << x << " " << y << endl;
    }


    return 0;
}