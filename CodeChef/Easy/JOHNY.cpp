#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	int testcases,n,i,k;
	cin>>testcases;

	while(testcases--){

		cin>>n;
	long long s[n],temp;
		for( i=0;i<n;i++)
			cin>>s[i];
		cin>>k;
		temp=s[k-1];
		sort(s,s+(n));
		for(i=0;i<n;i++){
			if(temp==s[i]){
				cout<<i+1<<endl;
				break;			
			}
		}

	}
	return 0;
}
