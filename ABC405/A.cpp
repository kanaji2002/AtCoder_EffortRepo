#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main() {

// 現在 AtCoder で開催されている AtCoder Regular Contest (ARC) には、Div. 
// 1 と Div. 
// 2 の 
// 2 種類が存在します。 ARC Div. 
// 1 では レーティング が 
// 1600 以上 
// 2999 以下の人が、ARC Div. 
// 2 ではレーティングが 
// 1200 以上 
// 2399 以下の人がそれぞれ Rated 対象 となります。

// 正整数 
// R,X が与えられます。


int r=0,x=0;
cin >> r >> x;
if((1600 <= r)&&(r<=2999)&&(x==1))cout << "Yes" <<endl;
else if((1200 <= r)&&(r<=2399)&&(x==2))cout << "Yes" <<endl;
else cout << "No" <<endl;

    return 0;
}

