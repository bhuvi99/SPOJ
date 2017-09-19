#include<iostream>
#include<cstdio>
#define sf(a) scanf("%d",&a);
#define usf(a) scanf("%lld",&a);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define PB push_back
using namespace std;
int main(){
	int t;
	sf(t)
	while(t--){
		unsigned long long int sum,f3,l3,n,a,d;
		scanf("%lld%lld%lld",&f3,&l3,&sum);
		n=(sum*2)/(f3+l3);
		d=(l3-f3)/(n-5);
		a=f3-2*d;
		cout<<n<<endl;
		rep(i,0,n) {
			cout<<a<<" ";
			a+=d;
		}
		cout<<endl;
	}
	return 0;
}
