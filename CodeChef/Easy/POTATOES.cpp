#include<iostream>
#include<cmath>
using namespace std;
#pragma GCC optimize ("-O3")
bool isPrime(int x)
{
    if (x < 2)
        return false;
	if(x==2||x==3)
		return true;
    int i, n=sqrt(x);
	for(i=2;i<=n+1;i++) 
		if(x%i==0) return false;
    return true;
}
int main(){
	int t,x,y,i,k;
	cin>>t;
	while(t--){
		cin>>x>>y;k=x+y;
		for(i=k+1;!isPrime(i);i++); cout<<i-k<<endl;
	}
	
}
