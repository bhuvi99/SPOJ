
#include<iostream>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<n;i++)
#define y "y "
#define n "n "
int main(){
 
	
	int t,k;
	cin>>t;
	string m,s,b;
	while(t--){
		cin>>k;
		
			m=(360%k==0)?y:n;
			s=(k<=360)?y:n;
			b=(k*(k+1)/2<=360)?y:n;
		cout<<m<<s<<b;
	
	}
	
}
 
