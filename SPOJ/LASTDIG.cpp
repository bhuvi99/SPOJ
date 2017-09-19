#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long a, b;
		cin>>a>>b;
		a=a%10;
		if(b==0) {cout<<1<<endl;continue;}
		if(a==0||a==1||a==5||a==6) cout<<a<<endl;
		else{
			b=b%4; b=b?b:4;
			cout<<((long)pow(a,b))%10<<endl;
		}
	}
}
