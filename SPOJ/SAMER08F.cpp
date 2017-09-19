#include<iostream>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	while(n){
		n=n*(n+1)*(2*n+1)/6;
		cout<<n<<endl;
		cin>>n;
	}
	cout<<endl;
}
