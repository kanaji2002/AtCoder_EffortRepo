#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<n; ++i)
int main() {

    vector<int> A={1,3,5,7,9};

    int x;
    cin >> x;

    int mid = A.size()/2;
    int left =0,right = A.size()-1;

    // while(left <= right){
    //     mid =(left + right)/2;
    //     if(A[mid] == x){
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    //     else if(A[mid] < x){
    //         left = mid +1;
    //     }
    //     else if(A[mid] > x){
    //         right = mid -1;
    //     }
    // }

    auto pos = lower_bound(A.begin(), A.end(), x);

    cout << pos << endl;

   
    return 0;
}