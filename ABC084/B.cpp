#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(long long i=a; i<b; i++)
int A, B; string S;
//---------------------------------------------------------------------------------------------------
#define yes "Yes"
#define no "No"
int check(char c) { return '0' <= c and c <= '9'; }
string solve() {
    rep(i, 0, A) if (!check(S[i])) return no;
    if (S[A] != '-') return no;
    rep(i, A + 1, A + B + 1) if (!check(S[i])) return no;
    return yes;
}
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> A >> B >> S;
    cout << solve() << endl;
    return 0;
}
