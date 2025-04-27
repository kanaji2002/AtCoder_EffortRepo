#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm> // count を使うため
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main() {
int A,B,C,K;
cin >> A >> B >> C >> K;

int max_num = max({A,B,C});
max_num <<= K;

int sum = A+B+C-max({A,B,C}) + max_num;

cout << sum <<endl;



  
  return 0;
}

