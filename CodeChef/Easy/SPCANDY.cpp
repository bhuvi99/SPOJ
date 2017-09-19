#include<iostream>
using namespace std;
#pragma GCC optimize ("-O3")
int main(){
	unsigned long long int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(n<k||k==0) cout<<0<<" "<<n<<endl;
		else
			cout<<n/k<<" "<<n%k<<endl;
	}
	return 0;
}
