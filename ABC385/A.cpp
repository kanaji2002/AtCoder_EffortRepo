#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
#include <set>
using namespace std;
using namespace std;
#include <cmath> // pow を使うため

#define rep(i,n) for(int i=0; i<n; i++)


int check_equal(int a, int b, int c) {
    if((a + b) == c) {
        return true;
    }
    return false;
}

int main() {

    int a,b,c;

    cin >> a >> b >> c;

    if(a==b && b==c){
        cout << "Yes" << endl;
    }
    else if(check_equal(a, b, c)){
        cout << "Yes" << endl;
    }
    else if(check_equal(b, c, a)){
        cout << "Yes" << endl;
    }
    else if(check_equal(c, a, b)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }



    

}