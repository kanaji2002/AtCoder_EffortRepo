#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    int s,a,b,x;

    cin >> s >> a >> b >> x;

    int tem = x%(a+b);
    if(tem >= a){
        tem = a;
    }
    else if(tem < a){
        tem = tem;
    }
    
    int tem2 = x/(a+b);

    int ans = tem2 * a * s + tem*s;

    cout << ans << endl;





    
    return 0;
}