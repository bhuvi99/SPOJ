#include<iostream>
#include<algorithm>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;
#pragma GCC optimize("-O3")
int main(){

	int n,d,p=0;
	cin>>n>>d;
	int c[n];
	rep(i,0,n) cin>>c[i];
	sort(c,c+n);
	rep(i,0,n-1) if(c[i+1]-c[i]<=d) {p++; i++;}
	cout<<p<<endl;





}
