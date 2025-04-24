#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using ll = long long;

int main(){

int N,K;
cin >> N >> K;
int S=K;
int A[N+1];

for(int i=0; i<K; i++){
    A[i]=1;
}
for(int i=K; i<=N; i++){
    //ここちょっとムズイ．
    // 例：
    // K = 3
    
    // 今 i = 5 のとき
    
    // ウィンドウには A[2], A[3], A[4] の3つが入ってる（つまり S = A[2] + A[3] + A[4]）
    
    // A[5] = S;        // A[5] = A[2] + A[3] + A[4]
    // S += A[5];       // ウィンドウの右端に A[5] を追加 → S = A[3] + A[4] + A[5] にしたい
    // S -= A[2];       // 古い A[2] を除外
    //つまり，上記では，Sは A[2]+A[3] + A[4] + A[5] → A[3] + A[4] + A[5] になる．
    // これを繰り返す．
    A[i]=S;
    S+=A[i];
    S-=A[i-K];
    
    S%=1000000000;
}

cout << A[N] << endl;
return 0;

}


