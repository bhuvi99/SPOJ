#include<iostream>
#include<cmath>
using namespace std;
int main(){

	long long testcases,s,g,i,n,q;
	cin>>testcases;
	while(testcases--){
		cin>>g;
		while(g--){
			cin>>i>>n>>q;
		
			if(n%2==0||i==q)
				cout<<n/2<<endl;
			else
				cout<<(n/2+1)<<endl;
		}
	}
	return 0;
}
