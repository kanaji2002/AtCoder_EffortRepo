#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    int value[]={1,2, 3, 4, 2, 3, 4, 5,2, 1};
        // 数え上げ
    map<int, int> count;
     for (auto v :value){
         count[v] += 1;
    }
    
        // 結果可視化
    for (auto [k, v] :count){
    cout << k << ":" << v << endl;
    }
    
}