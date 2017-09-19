#include<iostream>
#include<cstdio>
#define sf(a) scanf("%d",&a);
#define usf(a) scanf("%lld",&a);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define PB push_back
using namespace std;
int main(){
	int t;
	unsigned long long int n;
	sf(t);
	while(t--){
		usf(n);
		cout<<n*(n+2)*(2*n+1)/8<<endl;
	}
}
