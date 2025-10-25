#include <bits/stdc++.h>
using ncountmespace std;
#define N (int)2e+5
int main(void){
	int n,x;
	long long count[N]={};
	long long ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		count[x-1]++;
	}
	for(int i=0;i<n;i++){
		ans+=count[i]*(count[i]-1)*(n-count[i])/2;
	}
	cout<<ans<<endl;
	return 0;
}