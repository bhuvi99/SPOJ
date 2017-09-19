#include<iostream>
#include<cmath>
using namespace std;
void compute(){		
		int i,j,n,k;
		cin>>n>>k;
		int sum,com[n],flag=1;
		for(i=0;i<n;i++)
			cin>>com[i];
		
		unsigned long long setsize=pow(2,n);
		for(i=0;i<setsize;i++){
			sum=0;
			for(j=0;j<n;j++){
				if((1<<j)&i){
					//cout<<com[j]<<" ";
					sum+=com[j];
					if(sum==k){
						cout<<"Yes"<<endl;
						return;
					}
				}	
			}
		
		}
	
	cout<<"No"<<endl;
	return;
}
int main(){
	
	int testcases;
	cin>>testcases;
	while(testcases--){

	compute();
	}
	return 0;
}
