#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<n; i++)
int main() {

int x,a,b;
cin >> x >> a >> b;
int tem=b-a;
if(tem <= 0)
cout << "delicious" << endl;
else if(tem <= x)cout << "safe" << endl;
else cout << "dangerous" << endl;
  
    return 0;
}
