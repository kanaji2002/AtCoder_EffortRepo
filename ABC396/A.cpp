using namespace std;
#include <bits/stdc++.h>
//https://atcoder.jp/contests/abc396/tasks/abc396_a
#include <iostream>
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a[100];
        cin >> a[i] ;
        if (a[i]==a[i-1] && a[i]==a[i-2]){
            cout << "Yesss" << endl;
            return 0;
        }
        if(i==n){
            cout << "No" << endl;
        }

    }
}


