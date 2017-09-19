#include<iostream>
#pragma GCc optimize ("-O3")
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int gcd(int a,int b){
	if(b>a) return gcd(b,a);
	return b==0?a:gcd(b,a%b);
}
int main(){
	int t,n,g;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		rep(i,0,n) cin>>a[i];
		g=a[0];
		rep(i,1,n) g=gcd(g,a[i]);
		cout<<g<<endl;	
	}
}
