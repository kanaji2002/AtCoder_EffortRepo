#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
#include <set>
using namespace std;
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)


int main() {
    int n;
    set<int> s;
    cin >> n;
    rep(i,n){
        int tem;
        cin >> tem;
        s.insert(tem);
    }
    cout << s.size() << endl;
    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

