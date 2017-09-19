#include<iostream>
using namespace std;
long long gcd2(long long a, long long b){

	return b==0?a:gcd2(b,a%b);
}
int main(){

	char b[255];
	int j,n,a;
	long long val=0;	
	cin>>n;
	while(n--){	
		cin>>a>>b;
		if(a==0)
			cout<<b<<endl;
		else{		
			for(j=0,val=0;b[j]!='\0';j++){
					val=(10*val+(b[j]-'0'))%a;	
		}
			cout<<gcd2(a,val)<<endl;
		}
	}
}
