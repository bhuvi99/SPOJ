#include<iostream>
#include<algorithm>
#define rep(i,a,n) for(int i=(a);i<n;i++)
using namespace std;
int main(){
	
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int men[n],women[n],sum=0;
		rep(i,0,n) cin>>men[i];
		rep(i,0,n) cin>>women[i];
		sort(men,men+n);
		sort(women,women+n);
		rep(i,0,n) sum+=men[i]*women[i];
			
		cout<<sum<<endl;
	}
}
