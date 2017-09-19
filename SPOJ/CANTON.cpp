#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int t,n,x,next,z,temp;
	cin>>t;
	while(t--){
		cin>>x;
		n=ceil((sqrt(1+8*x)-1)/2);
	
	int sub=x-n*(n-1)/2;
		int sum=n+1;
		//	z=z>n/2?n--:n;
	//n++;
		if(n%2)
			printf("TERM %d IS %d/%d\n",x,sum-sub,sub);
		else printf("TERM %d IS %d/%d\n",x,sub,sum-sub);
		
		
		
	/*	if(x==next) printf("%d/%d\n",n==1?n:n-1,n);
		else{
			if(n>1) n--;
			if(x%2)		printf("%d/%d\n",z,n);
			else printf("%d/%d\n",n,z);
		}*/
	}
}
