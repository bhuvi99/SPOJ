#include<iostream>
#include<bitset>
#include<climits>
#include<cmath>
using namespace std;
int popcount(int n ){
	bitset<sizeof(int)*CHAR_BIT> b(n);
	return b.count();
}
int main(){
	int t,n,a,b,i,z,r;
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		a=popcount(a);
		b=popcount(b);
		z=(a+b<=n)?n-(a+b):(a+b)-n;
		for( r=0,i=z;i<n;i++) r=r+pow(2,i);
		cout<<r<<endl;
	}

}
