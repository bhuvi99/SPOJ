#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	int testcases,n,i;
	cin>>testcases;
	long long minimum=1000000001,temp;
	while(testcases--){
		minimum=1000000001;
		cin>>n;
	long long s[n];
		for( i=0;i<n;i++)
			cin>>s[i];
		sort(s,s+(n));
		for(i=0;i<n-1;i++){
			temp=s[i+1]-s[i];
			minimum=temp<minimum?temp:minimum;
		}
		cout<<minimum<<endl;

	}
	return 0;
}
