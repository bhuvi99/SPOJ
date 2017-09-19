#pragma GCC optimize ("-O3")
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n,m,q,ans,l,r;
	cin>>n>>m;
	while(m--){
		cin>>q;
		l=max(q-n,n+1);	
		r=min(q-1,2*n);
		if(r<l) cout<<0<<endl;
		else 
			cout<<r-l+1<<endl;
	}
}
